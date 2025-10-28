#include <stdio.h>

int main() {
    float kWh, tienBacThang = 0, phuPhi, tongTien;
    int loaiHo;

    // Nh?p d? li?u
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &kWh);

    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loaiHo);

    // Ki?m tra tính h?p l?
    if (kWh < 0 || loaiHo < 1 || loaiHo > 3) {
        printf("Du lieu khong hop le!\n");
        return 0;
    }

    // Tính ti?n theo b?c thang
    if (kWh <= 50) {
        tienBacThang = kWh * 1500;
    } 
    else if (kWh <= 100) {
        tienBacThang = 50 * 1500 + (kWh - 50) * 2000;
    } 
    else if (kWh <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (kWh - 100) * 2500;
    } 
    else {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kWh - 200) * 3000;
    }

    // Tính ph? phí theo lo?i h?
    if (loaiHo == 1)
        phuPhi = tienBacThang * 0.05;   // H? gia dình
    else if (loaiHo == 2)
        phuPhi = tienBacThang * 0.10;   // H? kinh doanh
    else
        phuPhi = tienBacThang * 0.08;   // H? s?n xu?t

    // T?ng ti?n ph?i tr?
    tongTien = tienBacThang + phuPhi;

    // In k?t qu?
    printf("\nTien bac thang: %.0f VND", tienBacThang);
    printf("\nPhu phi: %.0f VND", phuPhi);
    printf("\nTong tien dien phai tra: %.0f VND\n", tongTien);

    return 0;
}

