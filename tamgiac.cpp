#include <stdio.h>
#include <math.h>

int main(){
	int A, B, C;
    printf("Nhap vao 3 canh tam giac: ");
    scanf("%d %d %d", &A, &B, &C);
    
    if (A + B > C && A + C > B && B + C > A){
    	int P = A + B + C;
        float p = P / 2;
        float S = sqrt(p * (p - A) * (p - B) * (p - C));
        printf("Chu vi tam giac la: %d\n",P);
        printf("Dien tich tam giac la: %f\n", S);
    } else {
        printf("Khong phai tam giac");
    }
}

