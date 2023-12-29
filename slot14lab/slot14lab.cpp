#include <stdio.h>
#include "math.h"

float chu_vi_tam_giac(float a, float b, float c){
	return a + b + c;
}

float dien_tich_tam_giac(float a, float b, float c){
	//float p = chu_vi_tam_giac(a,b,c)/2.0
	float p = (a + b + c)/2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}

int tong_chu_so(int n){
	int e=0;
	while(n!=0){
	e += n%10;
	n/=10;
	}
	return e;
}

int ucln(int a, int b){
	for(int i=a; i>0; i--){
		if(a % i == 0 && b % i == 0){
			return i;
		}
	}
	return 1;	
}

int bcnn(int a, int b){
	for(int i=a; ; i++){
		if(i%a == 0 && i%b == 0){
			return i;
		}
	}
	return a*b;
}
//viet ham tim so lon nhat trong mang n so nguyen
int max(int arr[], int n){ // tham so dang tham chieu
	int h = arr[0];
	for(int i = 1; i<n; i++){
		if(h<arr[i]){
			h = arr[i];
		}
	}
	return h;
}

//viet ham nhap cac gia tri cho 1 mang n so nguyen
int nhap_mang(int a, int n){
	printf("Nhap so luong gia tri torng mang");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
}
int main(){
	float check1 = chu_vi_tam_giac(3, 4, 5);
	printf("%f\n",check1);
	float check2 = dien_tich_tam_giac(5,6,7);
	printf("%f\n",check2);
	int check3 = tong_chu_so(45);
	printf("%d\n",check3);
	
	int check4 = ucln(30, 25);
	printf("%d\n",check4);
	int check5 = bcnn(45, 10);
	printf("%d\n",check5);
	
	int ary[5] = {5,1,6,2,0};
	int m = max(ary,5);
	printf("%d\n",m);
}