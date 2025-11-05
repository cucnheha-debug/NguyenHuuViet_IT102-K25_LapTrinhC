#include <stdio.h>

int main() {
    // Khoi tao mang co cac phan tu trung lap
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mang moi sau khi loai bo trung lap
    int unique[100];
    int size = 0;
    int isDuplicate;

    // Duyet tung phan tu trong mang goc
    for (int i = 0; i < n; i++) {
        isDuplicate = 0; // Gia su chua trung lap

        // Kiem tra xem phan tu da ton tai trong mang unique chua
        for (int j = 0; j < size; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // Neu khong trung lap thi them vao mang unique
        if (!isDuplicate) {
            unique[size] = arr[i];
            size++;
        }
    }

    // In ra mang sau khi loai trung lap
    printf("Mang sau khi loai bo trung lap: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

