#include <stdio.h>

int main() {
    float heSoLuong, luong, phuCap, thuong = 0;
    int ngayCong, chucVu;

    // Nh?p d? li?u
    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);

    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &ngayCong);

    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);

    // Ki?m tra d? li?u h?p l?
    if (heSoLuong <= 0 || ngayCong < 0 || chucVu < 1 || chucVu > 3) {
        printf("Du lieu khong hop le!\n");
        return 0;
    }

    // Xác d?nh ph? c?p theo ch?c v?
    switch (chucVu) {
        case 1:
            phuCap = 500000;
            break;
        case 2:
            phuCap = 1000000;
            break;
        case 3:
            phuCap = 2000000;
            break;
        default:
            phuCap = 0;
    }

    // Tính thu?ng n?u có
    if (ngayCong > 26)
        thuong = (ngayCong - 26) * 200000;

    // Tính luong
    luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;

    // In k?t qu?
    printf("\n--- KET QUA TINH LUONG ---\n");
    printf("He so luong: %.2f\n", heSoLuong);
    printf("So ngay cong: %d\n", ngayCong);
    printf("Phu cap: %.0f VND\n", phuCap);
    printf("Thuong: %.0f VND\n", thuong);
    printf("Tong luong: %.0f VND\n", luong);

    return 0;
}

