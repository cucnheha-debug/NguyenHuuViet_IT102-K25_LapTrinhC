#include <stdio.h>

int main() {
    int a[5] = {1, 3, 5, 7, 9}; // Khai báo và gán giá tr? cho m?ng
    int i;
    int coSoChan = 0; // Bi?n ki?m tra có s? ch?n hay không

    printf("Cac phan tu trong mang la: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\nCac so chan trong mang la: ");
    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
            coSoChan = 1;
        }
    }

    if(coSoChan == 0) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

