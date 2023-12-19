#include <stdio.h>

int main(){
	int i = 1;
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	i= n-1;
	
	while(i>0){
		if(i % 2 == 0 && i % 3 == 0){
			
				printf("%d ",i);
				break;
			
		}
		i--;
	}
	printf("\nKet thuc");
}