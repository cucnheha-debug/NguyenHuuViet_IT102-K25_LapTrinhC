#include <stdio.h>

int main() {
    // Khoi tao mang so nguyen bat ky
    int arr[] = {10, 25, 7, 98, 54, 98, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Kiem tra neu mang co it hon 2 phan tu
    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu.\n");
        return 0;
    }

    int max1, max2;
    max1 = max2 = -2147483648; // Gia tri nho nhat cua int

    // Tim phan tu lon nhat va lon thu hai
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    // Kiem tra neu khong co phan tu lon thu hai
    if (max2 == -2147483648) {
        printf("Khong co phan tu lon thu hai trong mang.\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}

