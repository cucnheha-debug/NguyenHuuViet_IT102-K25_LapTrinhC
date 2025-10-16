#include <stdio.h>

int main() {
    int a = 5;    // khai bao va khoi tao bien a
    int b = 3;    // khai bao va khoi tao bien b
    int c = 2;    // khai bao va khoi tao bien c
    int d = 1;    // khai bao va khoi tao bien d

    int A = a * b - 2 * c + 3 * (a - d);  // tinh gia tri bieu thuc

    printf("Gia tri cua bieu thuc A la: %d\n", A);

    return 0;
}

