#include <stdio.h>

int main(){
	int n,k=0;
	printf("Nhap day n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=n-1; i>=0;i--){
		if(arr[i] % 2 == 1){
			printf("%d la so le cuoi cung cua day\n",arr[i]);
			break;
		} else {
			k++;
		}
	}
	if(n == k){
	printf("Trong mang khong co so le");
}
}
