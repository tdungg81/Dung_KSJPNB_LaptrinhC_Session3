#include <stdio.h>
int main() {
	float diemtoan, diemvan, diemanh; 
	
	printf("Moi ban nhap diem toan:");
	scanf("%f", &diemtoan);
	printf("Moi ban nhap diem van:");
	scanf("%f", &diemvan);
	printf("Moi ban nhap diem anh:");
	scanf("%f", &diemanh);
	
	float tong = diemtoan + diemvan + diemanh;
    float diemtrungbinh = tong / 3;
    
    printf("Tong 3 diem la: %.2f\n", tong);
	printf("Diem trung binh la: %2f\n", diemtrungbinh);
	
	return 0; 
	
	
} 
