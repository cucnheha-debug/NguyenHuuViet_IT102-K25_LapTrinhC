#include <stdio.h>

int main() {
    float thuNhap;  // don v?: tri?u d?ng
    float thue = 0; // s? ti?n thu? ph?i dóng

    printf("So Tien : ");
    scanf("%f", &thuNhap);

    if (thuNhap < 0) {
        printf("Thu nhap khong hop le\n");
        return 0;
    }

    if (thuNhap <= 5)
        thue = thuNhap * 0.05;
    else if (thuNhap <= 10)
        thue = thuNhap * 0.10;
    else
        thue = thuNhap * 0.15;

    printf("Thue thu nhap phai dong : %.2f\n", thue);

    return 0;
}

