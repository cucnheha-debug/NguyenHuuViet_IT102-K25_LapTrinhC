#include <stdio.h>
#include <math.h>

int main() {
    double r, chuvi, dientich;

    // Nh?p b�n k�nh h�nh tr�n
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);

    // T�nh chu vi v� di?n t�ch
    chuvi = 2 * M_PI * r;
    dientich = M_PI * r * r;

    // In k?t qu? ra m�n h�nh v?i 2 ch? s? th?p ph�n
    printf("Chu vi = %.2f\n", chuvi);
    printf("Dien tich = %.2f\n", dientich);

    return 0;
}

