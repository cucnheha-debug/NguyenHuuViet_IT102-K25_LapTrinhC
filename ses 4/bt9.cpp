#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int hopLe = 1; // gi? s? ban d?u là h?p l?
    int soNgayTrongThang;

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Ki?m tra nam, tháng h?p l?
    if (thang < 1 || thang > 12 || nam <= 0) {
        hopLe = 0;
    } else {
        // Xác d?nh s? ngày t?i da c?a tháng
        switch (thang) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                soNgayTrongThang = 31;
                break;
            case 4: case 6: case 9: case 11:
                soNgayTrongThang = 30;
                break;
            case 2:
                // Ki?m tra nam nhu?n
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                    soNgayTrongThang = 29;
                else
                    soNgayTrongThang = 28;
                break;
        }

        // Ki?m tra ngày h?p l?
        if (ngay < 1 || ngay > soNgayTrongThang) {
            hopLe = 0;
        }
    }

    if (hopLe)
        printf("Ngay thang nam hop le");
    else
        printf("Ngay thang nam khong hop le");

    return 0;
}

