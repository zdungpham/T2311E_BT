#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	printf("Nhap mang a: \n");
	scanf("%s",&a);
	int l = strlen(a);
	
	for(int i=0; i<l/2; i++){
		char temp = a[i];
		a[i] = a[l-i-1];
		a[l-i-1] = temp;
	}
	
	printf("Mang sau khi dao nguoc: %s\n",a);
	
	//viet chuong trinh nhap vao 1 chuoi sau do chuyen chuoi nay thanh chuoi in hoa
	char b[0];
	int cmp = strcmp(a,b);
	printf("\n%d",cmp);
	//for(int i=0; i<l; i++){
		
	//}
	
	//viet chuong trinh nhap vào m?ng 5 chu?i, s?p x?p m?ng này theo th? t? alphabe.
	char c[5][100];
	
}