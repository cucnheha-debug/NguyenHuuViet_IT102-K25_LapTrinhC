#include <stdio.h>
#include <math.h>

// Hàm ki?m tra s? nguyên t?
int laSoNguyenTo(int n) {
    if (n < 2) return 0; // nh? hon 2 không ph?i s? nguyên t?
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0; // chia h?t ? không ph?i s? nguyên t?
    }
    return 1; // là s? nguyên t?
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nh?p m?ng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int tong = 0;
    printf("\nCac so nguyen to trong mang la: ");

    // Duy?t m?ng và ki?m tra s? nguyên t?
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            printf("%d ", a[i]);
            tong += a[i];
        }
    }

    printf("\nTong cac so nguyen to = %d\n", tong);

    return 0;
}

