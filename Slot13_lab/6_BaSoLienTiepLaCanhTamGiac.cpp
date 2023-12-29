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
	printf("3 so lien tiep du dieu kien lam 3 canh cua tam giac la: \n");
	for(int i=0; i<n-2; i++){
		if(arr[i]>0 && arr[i+1]>0 && arr[i+2]>0){
			if(arr[i] + arr[i+1] > arr[i+2] 
			&& arr[i+1] + arr[i+2] > arr[i]
			&& arr[i+2] + arr[i] > arr[i+1]){
				printf("Canh1: %d	Canh2: %d	Canh3: %d\n",arr[i], arr[i+1],arr[i+2]);
			}
	}
}
}
