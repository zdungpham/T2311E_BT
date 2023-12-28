#include <stdio.h>

int main(){
	int n;
	printf("Nhap day gom [n] so n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j <= n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i<=n-1; i++){
		printf("%d\t",arr[i]);
	}
	printf("\nDoan chua tat ca cac gia tri trong mang la [-%d , %d]", arr[n-1], arr[n-1]);
}
