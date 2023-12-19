#include <stdio.h>

int main(){
	int daonguoc,n,x;
	printf("Nhap so: ");
	scanf("%d",&n);
	x = n;
	
	while(x>0){
		daonguoc = daonguoc * 10 + x % 10;
		x /= 10;
	}
	printf("So dao nguoc cua %d la %d", n, daonguoc);
}