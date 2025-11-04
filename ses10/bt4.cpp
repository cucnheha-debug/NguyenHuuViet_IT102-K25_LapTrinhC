#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n];
    // Nhap cac phan tu cua mang
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Thuat toan Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // In ket qua
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}

