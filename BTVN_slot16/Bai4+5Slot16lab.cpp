#include <stdio.h>
#include <string.h>

typedef struct Student{
	char name[100];
	int diemThi;
};
int main(){
	//Viết chương trình nhập vào thông tin 20 sinh viên(tên, điểm thi), sau đó sắp xếp mảng này theo thứ tự alphabet của tên sinh viên
	Student sv[5];
	printf("Nhap thong tin sinh vien \n");
	for(int i = 0; i<5; i++){
		printf("Nhap ten sinh vien: ");
		scanf("%s",sv[i].name);
		printf("Nhap diem sinh vien: ");
		scanf("%d",&sv[i].diemThi);
	}
	
	for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5-i-1; j++) {
            if (strcmp(sv[j].name, sv[j+1].name) > 0) {
            	Student tmp;
                strcpy(tmp.name, sv[j].name);
                tmp.diemThi = sv[j].diemThi;
                strcpy(sv[j].name, sv[j+1].name);
                sv[j].diemThi = sv[j+1].diemThi;
				strcpy(sv[j+1].name, tmp.name);
				sv[j+1].diemThi = tmp.diemThi;
            }
        }
    }
    printf("\n\nDanh sach sinh vien sap xep theo ten:\n");
	for(int i=0; i<5; i++){
		printf("\nTen sinh vien: %s ", sv[i].name);
		printf("\nDiem cua sinh vien: %d", sv[i].diemThi);
	}
	
	//sau đó sắp xếp mảng này theo thứ tự điểm từ cao đến thấp.
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5-i-1; j++){
			if(sv[j].diemThi < sv[j+1].diemThi){
				Student tmp;
				tmp.diemThi = sv[j].diemThi;
				strcpy(tmp.name, sv[j].name);;
				sv[j].diemThi = sv[j+1].diemThi;
				strcpy(sv[j].name, sv[j+1].name);
				sv[j+1].diemThi = tmp.diemThi;
				strcpy(sv[j+1].name, tmp.name);
			}
		}
	}
	printf("\n\nDanh sach sinh vien sap xep theo diem thi:\n");
	for(int i=0; i<5; i++){
		printf("\nTen sinh vien: %s ", sv[i].name);
		printf("\nDiem cua sinh vien: %d", sv[i].diemThi);
	}
}
