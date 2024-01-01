void sap_xep(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 1; i<n-i-1; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

bool timx(int arr[], int x, int n){
	for(int i = 0; i<n; i++){
		if(x = arr[i]){
			return true;
			break;
		}
	}
	return false;
}



float trung_binh_cong(float arr[], int n){
	float trungbinhcong;
	for(int i = 0; i<n-1; i++){
		for(int j = 1; j<n; j++){
			trungbinhcong = (arr[i]+arr[j])/(i+1);
		} 
	}
	return trungbinhcong;
}

int ucln(int arr[], int n){
	for(int i=n-1; i=0; i++){
		for(int j =1; j<arr[i]; j++){
			if(arr[i] % j ==0){
				return j;
			}
		}
	}
	return 1;
}

void dao_mang(int arr[], int n){
	for(int i=0; i<n/2; i++){
		for(int j=n-1; j>n/2; j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	}
}

