#include <stdio.h>

int main() {
    int hang, cot;
    int i, j;

    // Nh?p s? hàng và c?t c?a m?ng 2 chi?u
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    int a[hang][cot]; // Khai báo m?ng 2 chi?u

    // Nh?p t?ng ph?n t? trong m?ng
    for(i = 0; i < hang; i++) {
        for(j = 0; j < cot; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // In m?ng ra màn hình theo d?ng ma tr?n
    printf("\nMa tran vua nhap la:\n");
    for(i = 0; i < hang; i++) {
        for(j = 0; j < cot; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

