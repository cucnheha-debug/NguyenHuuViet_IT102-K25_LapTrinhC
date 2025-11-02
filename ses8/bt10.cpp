#include <stdio.h>
#include <math.h>

// Hàm ki?m tra s? nguyên t?
int laSoNguyenTo(int n) {
    if (n < 2)
        return 0; // Không ph?i s? nguyên t?
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1; // Là s? nguyên t?
}

int main() {
    int n;

    // Nh?p s? ph?n t? c?a m?ng
    printf("Enter length of arr : ");
    scanf("%d", &n);

    int arr[n];

    // Nh?p t?ng ph?n t? trong m?ng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // In m?ng sau khi nh?p
    printf("Mang sau khi nhap la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // In các s? nguyên t? trong m?ng
    printf("\nCac so nguyen to trong mang la : ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i]))
            printf("%d ", arr[i]);
    }

    printf("\n-------------------------------\n");

    return 0;
}

