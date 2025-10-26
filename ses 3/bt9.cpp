#include <stdio.h>

int main() {
    int n;
    double A;

    // Nhap n
    printf("Nhap n (>1): ");
    scanf("%d", &n);

    // Kiem tra dieu kien
    if (n <= 1) {
        printf("n phai lon hon 1!\n");
        return 0;
    }

    // Tinh gia tri bieu thuc
    A = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));

    // In ket qua voi 5 chu so thap phan
    printf("A = %.5f\n", A);

    return 0;
}

