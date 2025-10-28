#include <stdio.h>

int main() {
    float a, b, ketqua;
    char op;

    // Nh?p d? li?u
    printf("Nhap so thu nhat (a): ");
    scanf("%f", &a);

    printf("Nhap so thu hai (b): ");
    scanf("%f", &b);

    // Nh?p toán t?
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op); // có kho?ng tr?ng tru?c %c d? lo?i b? ký t? Enter còn sót l?i

    // Th?c hi?n phép tính theo toán t?
    switch (op) {
        case '+':
            ketqua = a + b;
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, ketqua);
            break;

        case '-':
            ketqua = a - b;
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, ketqua);
            break;

        case '*':
            ketqua = a * b;
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, ketqua);
            break;

        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0.\n");
            else {
                ketqua = a / b;
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, ketqua);
            }
            break;

        default:
            printf("Loi: Toan tu khong hop le.\n");
    }

    return 0;
}

