#include <stdio.h>

int main() {
    int a[5] = {12, 7, 25, 3, 19}; // Khai báo và gán giá tr? cho m?ng
    int i;
    int max = a[0]; // Gi? s? ph?n t? d?u tiên là l?n nh?t
    int min = a[0]; // Gi? s? ph?n t? d?u tiên là nh? nh?t

    // Tìm ph?n t? l?n nh?t và nh? nh?t
    for(i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    // In k?t qu?
    printf("Cac phan tu trong mang la: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\nPhan tu lon nhat la: %d", max);
    printf("\nPhan tu nho nhat la: %d", min);

    return 0;
}

