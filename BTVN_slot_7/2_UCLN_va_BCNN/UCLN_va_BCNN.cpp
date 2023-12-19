#include <stdio.h>

int main(){
	int a, b, bcnn, min, ucln, max;
	int i = 1;
	printf("Nhap a= ");
	scanf("%d",&a);
	
	printf("Nhap b= ");
	scanf("%d",&b);
	
	
	if(a<b){
		min = a;
		max = b;
	}else{
		min = b;
		max = a;
	}
			
	while(i <= min){
		if(a % i == 0 && b % i == 0){
			ucln = i;
		}
		i++;
	}
	printf("Uoc chung lon nhat la %d\n", ucln);
	
	while(max < a * b){
		if(max % a == 0 && max % b == 0 ){
			bcnn = max;
		}
		max++;
	}	
		printf("Boi chung nho nhat la %d\n", bcnn);
	// BCNN = a * b / UCLN
}
