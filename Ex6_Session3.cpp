#include <stdio.h>

int main() {
    
    float canh, chieucao;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canh);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieucao);

    float dientich = 0.5 * canh * chieucao; 

    printf("Dien tich cua tam giac la: %.2f\n", dientich);

    return 0;
}

