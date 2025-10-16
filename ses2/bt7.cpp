#include <stdio.h>

int main() {
    int number = 12345;     // khai bao va khoi tao bien so nguyen
    int sum = 0;            // bien luu tong cac chu so

    int n = number;         // tao bien tam de khong lam mat gia tri goc

    // tach tung chu so bang phep chia va phep lay du
    while (n > 0) {
        int digit = n % 10;   // lay chu so cuoi cung
        sum += digit;         // cong vao tong
        n /= 10;              // bo chu so cuoi (chia nguyen cho 10)
    }

    // hien thi ket qua
    printf("Tong cac chu so cua %d la: %d\n", number, sum);

    return 0;
}

