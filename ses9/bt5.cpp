#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nh?p m?ng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int count_even = 0, count_odd = 0;
    int tong_chan = 0, tong_le = 0;

    // In các s? ch?n
    printf("\nCac so chan trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            count_even++;
            tong_chan += arr[i];
        }
    }

    // In các s? l?
    printf("\nCac so le trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            count_odd++;
            tong_le += arr[i];
        }
    }

    // In k?t qu? d?m và t?ng
    printf("\n\nCo %d so chan va %d so le.\n", count_even, count_odd);
    printf("Tong so chan = %d\n", tong_chan);
    printf("Tong so le = %d\n", tong_le);

    return 0;
}

