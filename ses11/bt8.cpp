#include <stdio.h>

int main() {
    // Khoi tao mang so nguyen
    int arr[] = {4, 2, 4, 3, 2, 4, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0;   // Bien luu tan suat cao nhat
    int mostFrequent;   // Bien luu phan tu xuat hien nhieu nhat

    // Duyet tung phan tu de dem so lan xuat hien
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Cap nhat neu phan tu nay co tan suat cao hon
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    // In ket qua
    printf("Phan tu xuat hien nhieu nhat la %d\n", mostFrequent);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}

