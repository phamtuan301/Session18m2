#include <stdio.h>
int main(){
	struct sinhVien {
		char tenSinhvien[100];
		int age;
		char phoneNumber[20];
	};
	struct sinhVien sinhvien1={
		"Pham Minh Tuan",18,"0818418483"
	};
	printf("%s\n", sinhvien1.tenSinhvien);
	printf("%d\n", sinhvien1.age);
	printf("%s", sinhvien1.phoneNumber);
	return 0;
}