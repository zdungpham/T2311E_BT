//Vi?t hàm s?p x?p m?ng n s? nguyên
//Vi?t hàm tìm ki?m 1 giá tr? x có trong m?ng hay không?
//Vi?t hàm in ra danh sách giá tr? c?a m?ng
//Vi?t hàm tính trung bình c?ng các giá tr? trong m?ng
//Vi?t hàm tìm u?c chung l?n nh?t c?a t?t c? các ph?n t? trong m?ng
//Vi?t hàm d?o l?i các ph?n t? c?a m?ng

void sap_xep(int arr[],int n){
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

bool kiem_tra_x(int arr[], int n, int x){
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			return true;
		}
	}
	return false;
}

void in_danh_sach(int arr[],int n){
	for(int i = 0; i<n; i++){
		printf("%d\t",arr[i]);
	}
}

float tbc(int arr[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong += arr[i];
	}
	return (float)tong/n;
}

int ucln(int arr[], int n){
	int count = 0;
	int ucln = 1;
	for(int i=arr[0]; i>0; i--){
		for(int j = 0; j<n; j++){
			if(arr[j] % i ==0){
				count++;
				ucln = i;
			}
		}
		if(count == n){
			return ucln;
		} else {
			count = 0;
		}
	}
}

void dao_mang(int arr[], int n){
	for(int i=0; i<n/2; i++){
			int temp = arr[i];
			arr[i] = arr[n-i-1];
			arr[n-i-1] = temp;
		
	}
}

