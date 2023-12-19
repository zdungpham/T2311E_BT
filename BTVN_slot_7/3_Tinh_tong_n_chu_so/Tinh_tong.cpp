#include <stdio.h>

int main(){
	int n,sum;
	int i = 0;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	printf("Tong cua cac chu so cua %d so la %d", n, sum);
}
