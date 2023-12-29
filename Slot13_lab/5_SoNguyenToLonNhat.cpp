#include <stdio.h>

int main(){
	int n,count=0,max=0;
	printf("Nhap mang n= ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("arr[%d]= ", i);
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<n; i++){
		
		for(int j = 1; j<=arr[i]; j++){
			if(arr[i] % j == 0){
				count++;
			}
		}
			if(count==2 && arr[i]>max){
				max = arr[i];
		}
		count=0;
	}
		printf("So nguyen to lon nhat la %d",max);
}
