#include <stdio.h>

int main(){
	int n,x,k=0;
	printf("Nhap day n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Nhap so can kiem tra x= ");
	scanf("%d",&x);
	
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			k++;	
		}
	
}
	if(k !=1){
		printf("%d khong nam trong mang",x);
	} else 
	printf("%d co nam trong mang",x);
}
