#include <stdio.h>

int main(){
	int i = 1;
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	
	while(i<n){
		printf("%d ",i);
		i += 2;
	}
		printf("Ket thuc");
}