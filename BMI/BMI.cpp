#include <stdio.h>

int main(){
	float a,b,bmi;
	printf("Nhap can nang: (kg)");
	scanf("%f",&a);
	printf("Nhap chieu cao: (m)");
	scanf("%f",&b);
	
	
	bmi = a/(b*b);
	printf("BMI = %f\n",bmi);
	if(bmi <= 18.5){
		printf("Thieu can");
	} else if(bmi<24.9){
		printf("Binh thuong");
	} else if(bmi<30){
		printf("Thua can");
	} else {
		printf("Beo phi");
	}
}
