#include <stdio.h>
int main(){
	int n;
	printf("Nhap mang n=");
	scanf("%d",&n);
	
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
	
	
	int count = 1;
	int max = arr[0];
	for(int i = 0; i < n; i++){
		for(int j = i + 1 ; j < n; j++){
		if(arr[i] == arr[j]){
			count++;
		}
	}
		if(count > max){
			max = count;		
		}
		count = 1;
		}
		
	printf("Gia tri xuat hien nhieu nhat trong mang la \n");
	for(int i = 0; i < n; i++){
		for(int j = i + 1 ; j < n; j++){
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == max) {
            printf("%d\t ", arr[i]);
        }
        count = 1;
	}
	}

