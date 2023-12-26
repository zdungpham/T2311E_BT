#include <stdio.h>

int main(){
	int n,k=0,max;
	printf("Nhap day n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	arr[0]=max;
	for(int i = 0; i<n; i++){
		if(arr[i] % 2 == 0 && arr[i] > max){
			max = arr[i];
		}
	}
	printf("So nguyen duong lon nhat trong day la %d", max);
}
