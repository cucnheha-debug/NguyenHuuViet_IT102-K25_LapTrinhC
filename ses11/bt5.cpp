#include <stdio.h>
#include <string.h>

int main() {
    // Khoi tao mang chuoi
    char arr[5][50] = {"apple", "banana", "cherry", "orange", "grape"};
    char x[50];
    int found = -1;

    // Nhap chuoi can tim
    printf("Nhap chuoi can tim: ");
    scanf("%s", x);

    // Thuat toan tim kiem tuyen tinh (Linear Search)
    for (int i = 0; i < 5; i++) {
        if (strcmp(arr[i], x) == 0) {
            found = i;
            break;
        }
    }

    // In ket qua
    if (found != -1) {
        printf("Chuoi '%s' duoc tim thay tai vi tri %d\n", x, found);
    } else {
        printf("Khong tim thay chuoi '%s' trong mang\n", x);
    }

    return 0;
}

