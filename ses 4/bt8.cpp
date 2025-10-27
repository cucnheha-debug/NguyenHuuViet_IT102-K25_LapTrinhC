#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap canh a: ");
    scanf("%d", &a);

    printf("Nhap canh b: ");
    scanf("%d", &b);

    printf("Nhap canh c: ");
    scanf("%d", &c);

    // Ki?m tra di?u ki?n t?o thành tam giác
    if (a > 0 && b > 0 && c > 0 && 
        a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac");
    } else {
        printf("Khong phai 3 canh tam giac");
    }

    return 0;
}

