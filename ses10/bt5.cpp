#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, value, count = 0;
    scanf("%d", &n);
    int a[n];
    // Nhap cac phan tu cua mang
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Nhap so can tim
    scanf("%d", &value);
    // Tim kiem va dem so lan xuat hien
    for(i = 0; i < n; i++) {
        if(a[i] == value) count++;
    }
    // In ket qua
    printf("%d", count);
    return 0;
}

