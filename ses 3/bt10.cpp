#include <stdio.h>
#include <math.h>

int main() {
    double a, b, S;

    // Nhap a va b
    printf("Nhap a = ");
    scanf("%lf", &a);

    printf("Nhap b = ");
    scanf("%lf", &b);

    // Kiem tra dieu kien
    if (a <= 0 || b <= 0) {
        printf("a va b phai la so duong!\n");
        return 0;
    }

    // Tinh bieu thuc
    S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(a * a + b * b));

    // In ket qua voi 2 chu so thap phan
    printf("S = %.2f\n", S);

    return 0;
}

