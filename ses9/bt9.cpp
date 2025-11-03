#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? s?n cho m?ng
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0;   // S? l?n xu?t hi?n l?n nh?t
    int mostFreq = arr[0]; // Ph?n t? xu?t hi?n nhi?u nh?t

    // Duy?t m?ng và d?m t?n su?t
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // N?u ph?n t? này xu?t hi?n nhi?u hon ph?n t? hi?n t?i
        if (count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFreq);
    printf("Xuat hien %d lan\n", maxCount);

    return 0;
}

