#include <stdio.h>

int main(){
	float n, S;
	float i = 1;
	printf("Nhap n= ");
	scanf("%f",&n);
	
	while(i<=n){
		S = S + 1/i;
		i++;
	}
	printf("S = %f", S);
}
