#include <stdio.h>

int main(){
	int n,l=0,k=0;
	float trungbinh;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++){
		if(arr[i] % 2 == 1){
			l += arr[i];
			k++;
		}
	}
	printf("%d %d", l, k);
	trungbinh = (float)l/k;
	printf("\nTrung binh cac so le trong mang %d so la %f", n, trungbinh);
}
