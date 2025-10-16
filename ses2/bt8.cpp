#include <stdio.h>

int main() {
    int number = 12345;   // khai bao va khoi tao bien ban dau
    int result = 0;       // bien luu ket qua sau khi dao nguoc so

    int n = number;       // tao bien tam de giu nguyen gia tri goc

    while (n > 0) {
        int digit = n % 10;     // lay chu so cuoi cung
        result = result * 10 + digit;  // ghep chu so vao ket qua
        n = n / 10;             // bo chu so cuoi di
    }

    printf("So ban dau: %d\n", number);
    printf("So dao nguoc: %d\n", result);

    return 0;
}

