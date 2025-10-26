#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Nhap nhiet do theo do Celsius
    printf("Nhap nhiet do (Celsius): ");
    scanf("%f", &celsius);

    // Chuyen doi sang Fahrenheit
    fahrenheit = celsius * 9 / 5 + 32;

    // Hien thi ket qua
    printf("Nhiet do tuong ung theo Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

