#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}; // Khai báo và gán giá tr? cho m?ng
    int i;

    printf("Mang ban dau: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    // Thay d?i giá tr? t?ng ph?n t? trong m?ng
    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) // N?u là s? ch?n
            a[i] += 3;
        else // N?u là s? l?
            a[i] += 2;
    }

    // In m?ng sau khi thay d?i
    printf("\nMang sau khi thay doi: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

