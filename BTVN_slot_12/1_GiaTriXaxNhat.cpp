#include <stdio.h>

int main(){
	int arr[5] = {99, 53, 74, 20, 66 };
	int x;
	printf("Nhap gia tri x= ");
	scanf("%d",&x);
	
	
	int minus = 0;
    int temp = 0;
    int k = 0;
	for(int i = 0; i<5; i++){
	 	if(arr[i] - x >0){
	 		minus = arr[i] - x;
		}
		if(arr[i] - x <0){
			minus = x- arr[i];
		}
		if(minus > temp){
			temp = minus;
			k = i;
		}
		 
	}
	printf("So trong mang xa gia tri x nhat la %d", arr[k]);       
	
}
