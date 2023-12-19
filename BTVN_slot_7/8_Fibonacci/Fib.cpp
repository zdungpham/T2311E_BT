#include <stdio.h>

int main(){
    int n, i= 0, j = 1 , k, fib;
    printf("Nhap n= ");
    scanf("%d", &n);

    if (n == 0) {
        fib = 0;
    } else if (n == 1) {
        fib = 1;
    } else {
        k = 2;
        while (k <= n) {
            fib = i + j;
            i = j;
            j = fib;
            k++;
        }
    }

    printf("So Fibonacci thu %d la %d.\n", n, fib);
}

