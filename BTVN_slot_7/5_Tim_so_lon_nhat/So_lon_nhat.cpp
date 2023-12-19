#include <stdio.h>;

int main(){
	int n, i;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	i = n % 10;
	while(n>=10){
		n /= 10;
		if(n % 10 >i){
			i = n % 10;
		}
	}
	printf("So lon nhat la %d",i);
}
