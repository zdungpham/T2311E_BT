#include <stdio.h>

int main(){
	int n;
	printf("Nhap mang n=");
	scanf("%d",&n);
	
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
	int temp;
	for(int i=0; i<(n-1)/2;i++){
		temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
	for(int i = 0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	}