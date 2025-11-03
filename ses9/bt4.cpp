#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    // Nh?p các ph?n t? c?a m?ng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // C?ng d?n d? tính t?ng
    }

    // Tính giá tr? trung bình
    float average = (float)sum / n;

    // In k?t qu?
    printf("Gia tri trung binh cua cac phan tu trong mang la: %.2f\n", average);

    return 0;
}

