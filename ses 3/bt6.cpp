#include <stdio.h>

int main() {
    float day, cao, dientich;

    // Nhap do dai canh day va chieu cao
    printf("Nhap do dai canh day: ");
    scanf("%f", &day);

    printf("Nhap chieu cao: ");
    scanf("%f", &cao);

    // Tinh dien tich tam giac
    dientich = (day * cao) / 2;

    // In ket qua voi 2 chu so thap phan
    printf("Dien tich tam giac = %.2f\n", dientich);

    return 0;
}

