#include <stdio.h>

int main() {
    int a = 10;   // khai bao va khoi tao bien so nguyen thu nhat
    int b = 3;    // khai bao va khoi tao bien so nguyen thu hai

    int tong = a + b;        // phep cong
    int hieu = a - b;        // phep tru
    int tich = a * b;        // phep nhan
    float thuong = (float)a / b;  // phep chia (ep kieu sang float de co ket qua thap phan)

    printf("a = %d, b = %d\n", a, b);
    printf("Tong = %d\n", tong);
    printf("Hieu = %d\n", hieu);
    printf("Tich = %d\n", tich);
    printf("Thuong = %.2f\n", thuong);

    return 0;
}

