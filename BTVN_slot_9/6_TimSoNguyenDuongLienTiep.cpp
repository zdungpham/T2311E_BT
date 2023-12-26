#include <stdio.h>

int main(){
	int n,k=0,max=0;
	printf("Nhap day n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]> 0){
			k++;
		}
		if(k > max){
			max = k;
		}
		if(arr[i]<0){
			k = 0;
		}
	}
	if(max == 0){
		printf("Trong day khong co so nguyen duong");
	}else
	printf("So nguyen duong lien tiep nhieu nhat la %d", max);
}
