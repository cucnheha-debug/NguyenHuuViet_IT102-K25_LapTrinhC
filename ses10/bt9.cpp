#include <stdio.h>

int main() {
    // Khai bao bien
    int n, i, j, temp, id;
    scanf("%d", &n);
    int a[n];
    // Nhap gia cua tung san pham
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    // Nhap ma san pham can tim
    scanf("%d", &id);
    // In gia cua san pham voi ma ID
    if(id >= 0 && id < n)
        printf("Gia cua san pham voi ma ID %d: %d\n", id, a[id]);
    else
        printf("Khong ton tai san pham co ma ID nay\n");
    // Sap xep gia san pham tang dan (Bubble Sort)
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
    // In danh sach sau khi sap xep
    printf("Danh sach gia san pham sau khi sap xep: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}

