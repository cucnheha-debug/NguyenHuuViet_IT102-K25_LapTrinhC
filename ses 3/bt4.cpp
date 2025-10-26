#include <stdio.h>

int main() {
    float toan, van, anh;
    float tong, trungbinh;

    // Nhap diem
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tinh tong va diem trung binh
    tong = toan + van + anh;
    trungbinh = tong / 3;

    // In ket qua voi 2 chu so thap phan
    printf("Tong diem = %.2f\n", tong);
    printf("Diem trung binh = %.2f\n", trungbinh);

    return 0;
}

