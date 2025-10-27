#include <stdio.h>

int main() {
    int namSinh, tuoi;
    float diemTB;
    int namHienTai = 2025;  // B?n có th? thay d?i tùy theo nam ch?y th?c t?

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    // Ki?m tra nam sinh h?p l?
    if (namSinh <= 1900 || namSinh > namHienTai) {
        printf("Nam sinh khong hop le");
        return 0;
    }

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Tính tu?i
    tuoi = namHienTai - namSinh;

    // In thông tin sinh viên
    printf("\nThong tin sinh vien:\n");
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);

    // Ki?m tra d? 18 tu?i hay chua
    if (tuoi >= 18)
        printf("Tinh trang: Du 18 tuoi\n");
    else
        printf("Tinh trang: Chua du 18 tuoi\n");

    // X?p lo?i h?c l?c
    if (diemTB < 5.0)
        printf("Hoc luc: Yeu\n");
    else if (diemTB < 6.5)
        printf("Hoc luc: Trung binh\n");
    else if (diemTB < 8.0)
        printf("Hoc luc: Kha\n");
    else
        printf("Hoc luc: Gioi\n");

    return 0;
}

