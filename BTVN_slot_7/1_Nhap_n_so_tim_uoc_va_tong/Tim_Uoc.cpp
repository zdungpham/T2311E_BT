//tim cac uoc va tinh tong cac uoc 
#include <stdio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	int sum,i;
	
	while(i<n){
		if(n % i ==0){
			printf("Cac uoc la: %d\n",i);
			sum += i;
		}
		i++;
	}
	printf("Tong cac uoc so cua %d so = %d.",n ,sum);
}
