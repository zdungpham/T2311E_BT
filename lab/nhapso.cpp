#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	for(int i = 1; i<=n; i++){
		if(n <= 0 || n >= 101){
			printf("Vui long nhap trong khong tu 1 den 100\n");
			printf("Nhap n= ");
			scanf("%d",&n);
		}
	}printf("Xin cam on");
}