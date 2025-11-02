#include <stdio.h>

int main() {
    int hang, cot;
    int i, j;

    // Nh?p s? hàng và c?t
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    int a[hang][cot]; // Khai báo m?ng 2 chi?u

    // Nh?p t?ng ph?n t? trong m?ng
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // In ra m?ng sau khi nh?p
    printf("\nMang sau khi nhap la:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // In ra các ph?n t? n?m trên du?ng biên
    printf("\nCac phan tu cua mang nam tren duong bien la:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            // Ði?u ki?n ph?n t? n?m trên biên:
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1)
                printf("%d ", a[i][j]);
            else
                printf("  "); // In kho?ng tr?ng d? gi? hình d?ng ma tr?n
        }
        printf("\n");
    }

    return 0;
}

