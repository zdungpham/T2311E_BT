#include <stdio.h>

int main(){
	int n;
	int uoc;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			uoc += i;
		}
	}
	if(uoc == n){
		printf("%d la so hoan hao", n);
	}else{
	printf("%d khong phai so hoan hao",n);
}
}