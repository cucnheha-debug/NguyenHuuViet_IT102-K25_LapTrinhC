#include <stdio.h>

int main() {
    // Khoi tao mang so nguyen da duoc sap xep tang dan
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int x;
    
    // Nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    
    // Thuat toan tim kiem nhi phan
    int left = 0, right = n - 1, mid;
    int found = -1;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Ket qua tim kiem
    if (found != -1) {
        printf("Phan tu %d duoc tim thay tai chi so %d\n", x, found);
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    }
    
    return 0;
}

