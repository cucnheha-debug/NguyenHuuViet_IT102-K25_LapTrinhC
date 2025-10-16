#include <stdio.h>
#include <math.h>   // thu vien dung cho ham sqrt() va fabs()

int main() {
    int a = 4;    // khai bao va khoi tao bien so nguyen a
    int b = 3;    // khai bao va khoi tao bien so nguyen b
    int c = 2;    // khai bao va khoi tao bien so nguyen c

    // tinh gia tri bieu thuc
    double S = (sqrt(a * a + b * b) / (c + 1.0)) + ((a * b) / (double)c) - sqrt(fabs(a - b) + c * c);

    // hien thi ket qua
    printf("Gia tri cua bieu thuc S la: %.2f\n", S);

    return 0;
}

