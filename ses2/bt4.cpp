#include <stdio.h>

int main() {
    int chieuDai = 8;     // khai bao va khoi tao chieu dai
    int chieuRong = 5;    // khai bao va khoi tao chieu rong

    int chuVi = 2 * (chieuDai + chieuRong);  // cong thuc tinh chu vi
    int dienTich = chieuDai * chieuRong;     // cong thuc tinh dien tich

    // hien thi ket qua ra man hinh
    printf("Chieu dai: %d\n", chieuDai);
    printf("Chieu rong: %d\n", chieuRong);
    printf("Chu vi hinh chu nhat la: %d\n", chuVi);
    printf("Dien tich hinh chu nhat la: %d\n", dienTich);

    return 0;
}

