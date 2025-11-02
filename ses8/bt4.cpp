#include <stdio.h>

int main() {
    int n, i;

    // Nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n]; // Khai báo m?ng có n ph?n t?

    // Nh?p t?ng ph?n t? c?a m?ng
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // In m?ng sau khi nh?p
    printf("\nMang sau khi nhap la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

