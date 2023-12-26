#include <stdio.h>

int main(){
	int n,max=0,sum=0;
	printf("Nhap day n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]> 0){
			sum += arr[i];
		}
		if(sum > max){
			max = sum;
		}
		if(arr[i]<0){
			sum = 0;
		}
	}
	if(max == 0){
		printf("Trong day khong co so nguyen duong");
	}else
	printf("So nguyen duong lien tiep nhieu nhat la %d", max);
}
