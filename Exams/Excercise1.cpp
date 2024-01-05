#include <stdio.h>

int main(){
	int n;
	int check = 0;
	printf("Enter amount of numbers n= ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	for(int j=n-1; j>=0; j--){
		if(arr[j]%2==0){
			printf("Last even number is: %d",arr[j]);
			check =1;
			break;
		}
	}
	if(check == 0)
	printf("No EVEN number");
	
}