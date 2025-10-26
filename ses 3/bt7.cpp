#include <stdio.h>

int main() {
    int n;
    int a, b, c, d, tong;

    // Nhap so nguyen co 4 chu so
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);

    // Tach tung chu so
    a = n / 1000;           // Chu so hang nghin
    b = (n / 100) % 10;     // Chu so hang tram
    c = (n / 10) % 10;      // Chu so hang chuc
    d = n % 10;             // Chu so hang don vi

    // Tinh tong cac chu so
    tong = a + b + c + d;

    // In ket qua
    printf("Tong cac chu so = %d\n", tong);

    return 0;
}

