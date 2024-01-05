#include <stdio.h>

int main(){
	int n, uoc;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	for(int i = 1; i<n; i++){
		if(n % i == 0){
			uoc ++;
		}
	}
	if(uoc < 2){
	printf("%d la so nguyen to", n);
	}else {
	
	printf("%d khong phai so nguyen to", n);
}}