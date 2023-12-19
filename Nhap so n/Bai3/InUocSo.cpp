#include <stdio.h>

int main(){
	int i = 1;
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	
	while(i<n){
		if(n % i == 0){
			printf("%d ",i);
		}
		i++;
	}
	printf("Ket thuc");
}