#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[n]; // m?ng luu s? l?n xu?t hi?n
    int visited[n]; // m?ng dánh d?u ph?n t? dã du?c d?m

    // Kh?i t?o
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
        visited[i] = 0;
    }

    // Ð?m t?n su?t xu?t hi?n c?a t?ng ph?n t?
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) { // n?u ph?n t? này chua d?m
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1; // dánh d?u dã d?m
                }
            }
            freq[i] = count;
        }
    }

    // Tìm t?n su?t xu?t hi?n l?n nh?t
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
        }
    }

    // In t?t c? ph?n t? có s? l?n xu?t hi?n = maxCount
    printf("Cac phan tu xuat hien nhieu nhat (%d lan) la: ", maxCount);
    for (int i = 0; i < n; i++) {
        if (freq[i] == maxCount) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}

