#include <stdio.h>
#include "function.h"

//	Vi?t c�c h�m sau d� x�y d?ng chuong tr�nh d? s? d?ng c�c h�m d� t?o:

//Vi?t h�m s?p x?p m?ng n s? nguy�n
//Vi?t h�m t�m ki?m 1 gi� tr? x c� trong m?ng hay kh�ng?
//Vi?t h�m in ra danh s�ch gi� tr? c?a m?ng
//Vi?t h�m t�nh trung b�nh c?ng c�c gi� tr? trong m?ng
//Vi?t h�m t�m u?c chung l?n nh?t c?a t?t c? c�c ph?n t? trong m?ng
//Vi?t h�m d?o l?i c�c ph?n t? c?a m?ng


int main(){
//Yeu cau 1:
int arr[8] = {99,9,43,52,54,65,3,23};
sap_xep(arr,8);

//Yeu cau 3:
printf("Mang sau khi sap xep: \n");
in_danh_sach(arr, 8);


//Yeu cau 2:
int x = 99;
if(kiem_tra_x(arr, 8, x) == true){
	printf("\nCo x trong mang \n");
} else{
	printf("\nKhong co x trong mang \n");
}

//Yeu cau 4:
float trung_binh = tbc(arr, 8);
printf("Trung binh cong cua mang = %f", trung_binh);


//Yeu cau 5:
int ary[5] = {24,8,64,16,32};
int u = ucln(ary,5);
printf("\nUoc chung lon nhat cua mang la %d \n",u);

//yeu cau 6:

dao_mang(arr, 8);
printf("Mang sao khi duoc dao nguoc :\n");
in_danh_sach(arr, 8);
}
