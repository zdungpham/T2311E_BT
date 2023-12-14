#include <stdio.h>

int main(){
	char kytu;
	printf("Nhap ky tu: ");
	scanf("%c",&kytu);
	
	if(kytu >= 'A' && kytu <= 'Z'){
		printf("Ky tu la chu cai in hoa");
	} else if(kytu >= 'a' && kytu <= 'z'){
		printf("Ky tu la chu cai in thuong");
	} else if(kytu >= '0' && kytu <= '9'){
		printf("Ky tu la chu so");
	} else {
		printf("Ky tu la la ky hieu dac biet");
	}
}
