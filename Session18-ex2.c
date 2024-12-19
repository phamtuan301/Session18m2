#include <stdio.h>
int main(){
	struct sinhVien{
		char tenSinhvien[100];
		int age;
		char phoneNumber[20];
	};
	struct sinhVien sinhvien1;
	printf("Moi ban nhap ho va ten cho sinh vien: \n");
	fgets(sinhvien1.tenSinhvien,100,stdin);
	printf("Moi ban nhap tuoi cho sinh vien: \n");
	scanf("%d", &sinhvien1.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai cho sinh vien: \n");
	fgets(sinhvien1.phoneNumber,20,stdin);
	printf("Ho va ten: %s\n", sinhvien1.tenSinhvien);
	printf("Tuoi: %d\n", sinhvien1.age);
	printf("SDT: %s\n", sinhvien1.phoneNumber);
	return 0;
}