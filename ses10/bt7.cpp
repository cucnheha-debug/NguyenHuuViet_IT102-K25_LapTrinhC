#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, x;
    scanf("%d", &n);
    int a[n];
    // Nhap cac phan tu cua mang da sap xep tang dan
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Nhap gia tri can tim
    scanf("%d", &x);
    // Tim kiem nhi phan
    int left = 0, right = n - 1, mid, found = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            printf("%d", mid);
            found = 1;
            break;
        } else if(a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    // Neu khong tim thay
    if(!found) printf("Khong tim thay");
    return 0;
}

