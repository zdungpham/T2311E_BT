#include <stdio.h>

float average(int s[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		sum += s[i];
	}
	return (float)sum/n;
}

int main(){
	int n;
	float trungbinh;
	
	printf("Enter amount of numbers n= ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	trungbinh = average(arr,n);
	printf("Average: %f",trungbinh);
	
}