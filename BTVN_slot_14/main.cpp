#include <stdio.h>
#include "function.h"

//	Vi?t các hàm sau dó xây d?ng chuong trình d? s? d?ng các hàm dã t?o:

//Vi?t hàm s?p x?p m?ng n s? nguyên
//Vi?t hàm tìm ki?m 1 giá tr? x có trong m?ng hay không?
//Vi?t hàm in ra danh sách giá tr? c?a m?ng
//Vi?t hàm tính trung bình c?ng các giá tr? trong m?ng
//Vi?t hàm tìm u?c chung l?n nh?t c?a t?t c? các ph?n t? trong m?ng
//Vi?t hàm d?o l?i các ph?n t? c?a m?ng


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
