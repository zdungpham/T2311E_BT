#include <stdio.h>
#include <math.h>
int main(){
	int a, chuvi=0;
	float p, dientich;
	printf("Nhap do dai canh a= ");
	scanf("%d",&a);
	
	int b;
	printf("Nhap do dai canh b= ");
	scanf("%d",&b);
	
	int c;
	printf("Nhap do dai canh c= ");
	scanf("%d",&c);
	
	for(int i=0; ; i++){
	if(a+b<=c || a+c <=b|| b+c<=a){
			printf("Vui long nhap 3 canh phu hop\n");
			printf("Nhap do dai canh a= ");
			scanf("%d",&a);
	
			printf("Nhap do dai canh b= ");
			scanf("%d",&b);
	
			printf("Nhap do dai canh c= ");
			scanf("%d",&c);
		} else if( a + b > c && a + c > b && b + c > a){
		chuvi = a + b +c;
		p = (float)chuvi/2;
		dientich = sqrt(p*(p-a)*(p-b)*(p-c));
		break;
		
	}
	}
	printf("chu vi tam giac la %d", chuvi);
	printf("\ndien tich tam giac la %f", dientich);
	
}