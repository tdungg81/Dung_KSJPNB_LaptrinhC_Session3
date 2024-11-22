#include <stdio.h>

int main() {
    
    const float PI = 3.14; 
    float r; 

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

   
    float chuvi = 2 * PI * r;            
    float dientich = PI * r * r;   

    printf("Chu vi hinh tron la: %.2f\n", chuvi);
    printf("Dien tich hinh tron la: %.2f\n", dientich);

    return 0;
}

