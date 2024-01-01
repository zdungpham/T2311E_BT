#include <stdio.h>
#include "function.h"

//	Viết các hàm sau đó xây dựng chương trình để sử dụng các hàm đã tạo:

//Viết hàm sắp xếp mảng n số nguyên
//Viết hàm tìm kiếm 1 giá trị x có trong mảng hay không?
//Viết hàm in ra danh sách giá trị của mảng
//Viết hàm tính trung bình cộng các giá trị trong mảng
//Viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng
//Viết hàm đảo lại các phần tử của mảng
void in_danh_sach(int arr[],int n){
	for(int i = 0; i<n; i++){
		printf("%d\t",arr[i]);
	}
}

int main(){

int arr[8] = {99,9,43,52,54,65,3,23};
sap_xep(arr,8);
for(int i =0; i<8; i++){
	printf("%d",arr[i]);
}

}