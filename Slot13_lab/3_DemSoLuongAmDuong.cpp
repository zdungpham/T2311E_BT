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
	int demam = 0;
	int demduong = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] < 0){
			demam++;
		}
		if(arr[i] > 0){
			demduong++;
		}
	}
	printf("So luong so am la %d\n", demam);
	printf("So luong so duong la %d", demduong);
}