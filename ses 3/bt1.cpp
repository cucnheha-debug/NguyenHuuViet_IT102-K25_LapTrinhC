#include <stdio.h>

int main() {
    char name[50]; // khai báo biến để lưu tên (tối đa 49 ký tự)

    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin); // đọc chuỗi từ bàn phím (cho phép có khoảng trắng)

    // In lời chào
    printf("Xin chao %s", name);

    return 0;
}
