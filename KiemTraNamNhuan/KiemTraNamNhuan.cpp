#include <stdio.h>

int main(){
	int a,X,Y,Z;
	printf("Nhap nam: ");
	scanf("%d",&a);
	
	X = a % 4;
	Y = a % 100;
	Z = a % 400;
	if(X == 0 && Y != 0 || Z == 0){
		printf("La nam nhuan");
	} else{
		printf("Khong phai nam nhuan");
	}
}
