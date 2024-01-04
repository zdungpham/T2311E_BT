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
	for(int i=0; i<l; i++){
		if(a[i] >= 'a' && a[i] <= 'z'){
			a[i] -= 32;
		}
	}
	printf("Ket qua %s",a);
	
	//viet chuong trinh nhap vào m?ng 5 chu?i, s?p x?p m?ng này theo th? t? alphabe.
	char c[5][100];
	char t[100];

	printf("\nNhap mang c gom 5 chuoi: \n");
	for(int i = 0; i<5; i++){
		scanf("%s",&c[i]);
	}
	
	for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            if (strcmp(c[j - 1], c[j]) > 0) {
                strcpy(t, c[j - 1]);
                strcpy(c[j - 1], c[j]);
                strcpy(c[j], t);
            }
        }
    }
    
    printf("Chuoi sau khi duoc sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", c[i]);
    }
	
	
}
