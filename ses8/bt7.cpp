#include <stdio.h>

int main() {
    int n, i;

    // Nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n]; // Khai báo m?ng có n ph?n t?

    // Nh?p t?ng ph?n t? sao cho t?t c? d?u là s? l?
    for(i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d (so le): ", i + 1);
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0) {
                printf("Gia tri vua nhap la so chan! Vui long nhap lai.\n");
            }
        } while(a[i] % 2 == 0); // L?p l?i n?u nh?p s? ch?n
    }

    // In m?ng sau khi nh?p xong
    printf("\nCac phan tu trong mang la: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

