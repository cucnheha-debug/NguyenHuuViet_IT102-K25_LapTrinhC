#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, j, min, temp, x;
    scanf("%d", &n);
    int a[n];
    // Nhap cac phan tu cua mang
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Nhap so can tim
    scanf("%d", &x);
    // Tim so nho nhat bang Linear Search
    min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min) min = a[i];
    }
    printf("So nguyen nho nhat trong mang la: %d\n", min);
    // Sap xep mang bang Selection Sort
    for(i = 0; i < n - 1; i++) {
        int min_index = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min_index]) min_index = j;
        }
        if(min_index != i) {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    // In mang sau khi sap xep
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    // Tim kiem nhi phan
    int left = 0, right = n - 1, mid, found = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            printf("Phan tu %d co chi so %d trong mang da sap xep.", x, mid);
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

