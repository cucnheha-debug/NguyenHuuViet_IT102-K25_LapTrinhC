#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, x;
    scanf("%d", &n);
    int a[n];
    // Nhap cac phan tu cua mang
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Nhap so can tim
    scanf("%d", &x);
    int found = 0;
    // Tim kiem tuan tu
    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("Phan tu %d nam o chi so %d", x, i);
            found = 1;
            break;
        }
    }
    // Neu khong tim thay
    if(!found) printf("Khong tim thay");
    return 0;
}

