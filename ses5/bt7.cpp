#include <stdio.h>

int main() {
    char c;

    printf("Nhap mot ky tu: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        // N?u l� ch? thu?ng ? d?i th�nh ch? hoa
        printf("Ky tu hoa tuong ung: %c\n", c - 32);
    } 
    else if (c >= 'A' && c <= 'Z') {
        // N?u l� ch? hoa ? d?i th�nh ch? thu?ng
        printf("Ky tu thuong tuong ung: %c\n", c + 32);
    } 
    else {
        // N?u kh�ng ph?i ch? c�i
        printf("Khong phai chu cai.\n");
    }

    return 0;
}

