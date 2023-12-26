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
	
	for(int j=0; j<n; j+=2){
		if(arr[j] % 2 == 1){
			l += arr[j];
			k++;
		}
	}
	trungbinh = (float)l/k;
	if(l == 0){
		printf("\nTrong day khong co so le o vi tri chan");
	} else
	printf("\nTrung binh cac so le trong mang %d so la %f", n, trungbinh);
}
