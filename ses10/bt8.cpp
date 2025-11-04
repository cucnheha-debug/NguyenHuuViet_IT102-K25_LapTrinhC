#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, j, temp, x;
    scanf("%d", &n);
    int a[n];
    // Nhap cac phan tu cua mang
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Nhap phan tu can tim
    scanf("%d", &x);
    // Sap xep bang thuat toan Bubble Sort
    for(i = 0; i < n - 1; i++) {
        int swapped = 0;
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
    // In mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    // Tim kiem nhi phan
    int left = 0, right = n - 1, mid, found = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            printf("Chi so cua phan tu can tim: %d", mid);
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

