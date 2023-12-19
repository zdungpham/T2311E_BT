#include <stdio.h>

int main(){
	int n;
	int i = 1;
	int N = 1;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	while(i<=n){
		N *= i;
		i++;
	}
	printf("%d! = %d",n,N);
}
