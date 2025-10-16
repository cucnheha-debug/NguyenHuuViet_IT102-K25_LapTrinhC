#include <stdio.h>

int main() {
    int a = 5;           // bien so nguyen thu nhat
    int b = 8;           // bien so nguyen thu hai
    float c = 2.5;       // bien so thuc

    float tongThuc = a + b + c;     // tong cua ca 3 so (luu vao bien float)
    int tongNguyen = a + b + (int)c; // tong phan nguyen cua 3 so (ep c thanh so nguyen)

    printf("a = %d, b = %d, c = %.2f\n", a, b, c);
    printf("Tong ca 3 so (float) = %.2f\n", tongThuc);
    printf("Tong phan nguyen (int) = %d\n", tongNguyen);

    return 0;
}

