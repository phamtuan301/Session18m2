#include <stdio.h>
int main(){
	struct SinhVien {
		char tenSinhvien[100];
		int age;
		char phoneNumber[20];
	};
	struct SinhVien sinhvien[5];
	for (int i=0;i<5;i++){
		printf("Moi ban nhap ho va ten sinh vien: ");
		fgets(sinhvien[i].tenSinhvien,100,stdin);
		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sinhvien[i].age);
		fflush(stdin);
		printf("Moi ban nhap so dien thoai sinh vien: ");
		fgets(sinhvien[i].phoneNumber,20,stdin);
		printf("\n");
	}
	for (int i=0;i<5;i++){
		printf("Ho va ten sinh vien: %s\n", sinhvien[i].tenSinhvien);
		printf("Tuoi sinh vien: %d\n", sinhvien[i].age);
		printf("SDT:%s \n ", sinhvien[i].phoneNumber);
	}
	return 0;
}