#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("So vua nhap la so duong");
    } else if (n < 0) {
        printf("So vua nhap la so am");
    } else {
        printf("So vua nhap la so 0");
    }

    return 0;
}

