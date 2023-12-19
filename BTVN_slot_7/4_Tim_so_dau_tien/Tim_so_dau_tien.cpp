#include <stdio.h>

int main(){
	int n, x;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	while(n>=10){
		n /= 10;
	}
	x = n;
	printf("Chu so dau tien cua so da nhap la %d",x);
}
