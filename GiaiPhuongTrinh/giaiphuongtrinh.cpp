#include <stdio.h>
#include <math.h>

//Nhập vào 3 số nguyên a,b,c là 3 hằng số của một phương trình dạng ax^2 + bx + c = 0. 
//Giải phương trình để tìm nghiệm x của nó.
int main(){
	int a, b, c;
	float delta, x1, x2;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	printf("Nhap c=\n");
	scanf("%d",&c);
	
	delta = (b * b - 4.0 * a * c);
	printf("delta= %f\n",delta);
	if(delta <0){
		printf("Phuong trinh vo nghiem\n");
	} else if(delta == 0){
		x1 = x2 = (-b / (2.0 *a));
		printf("Phuong trinh co nghiem kep %f", x1);
	} else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("phuong trinh co 2 nghiem x1 = %f va x2 = %f", x1, x2);
	}
	
	
}