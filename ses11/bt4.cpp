#include <stdio.h>

int main() {
    // Khoi tao mang so nguyen bat ky
    int arr[] = {5, 2, 9, 1, 7, 6};
    int n = 6;
    int temp;

    // Thuat toan sap xep noi bot (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoan doi hai phan tu
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In ra mang sau khi sap xep tang dan
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

