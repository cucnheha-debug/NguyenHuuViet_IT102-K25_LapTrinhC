#include <stdio.h>
#include <math.h>

int main() {
    double r, chuvi, dientich;

    // Nh?p bán kính hình tròn
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);

    // Tính chu vi và di?n tích
    chuvi = 2 * M_PI * r;
    dientich = M_PI * r * r;

    // In k?t qu? ra màn hình v?i 2 ch? s? th?p phân
    printf("Chu vi = %.2f\n", chuvi);
    printf("Dien tich = %.2f\n", dientich);

    return 0;
}

