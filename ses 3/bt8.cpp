#include <stdio.h>

int main() {
    int n;
    int a, b, c, d, nghichdao;

    // Nhap so nguyen co 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    // Tach tung chu so
    a = n / 1000;           // Chu so hang nghin
    b = (n / 100) % 10;     // Chu so hang tram
    c = (n / 10) % 10;      // Chu so hang chuc
    d = n % 10;             // Chu so hang don vi

    // Tao so nghich dao
    nghichdao = d * 1000 + c * 100 + b * 10 + a;

    // In ket qua
    printf("So nghich dao la: %d\n", nghichdao);

    return 0;
}

