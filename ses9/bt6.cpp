#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nh?p các ph?n t? c?a m?ng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nh?p giá tr? c?n tìm
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);

    int found = 0; // c? ki?m tra có tìm th?y hay không

    // Tìm giá tr? x trong m?ng
    printf("Gia tri %d xuat hien tai vi tri: ", x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i); // in v? trí (theo ch? s? m?ng)
            found = 1;
        }
    }

    // N?u không tìm th?y
    if (!found) {
        printf("\nGia tri %d khong ton tai trong mang.\n", x);
    } else {
        printf("\n");
    }

    return 0;
}

