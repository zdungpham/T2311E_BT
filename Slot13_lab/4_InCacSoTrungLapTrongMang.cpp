#include <stdio.h>

int main(){
	int n;
	printf("Nhap mang n= ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("arr[%d]= ", i);
		scanf("%d",&arr[i]);
	}
	printf("Cac so trung lap trong mang la	");
	for(int i=0; i<n; i++){
		for(int j=i+1 ; j<n; j++){
			if(arr[i] == arr[j]){
				printf("%d\t %d\t", arr[i], arr[j]);
				
			}
		}
	}
	

}
