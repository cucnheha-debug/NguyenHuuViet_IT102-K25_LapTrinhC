#include <stdio.h>

int main() {
    char c;

    printf("Nhap mot ky tu: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        // N?u là ch? thu?ng ? d?i thành ch? hoa
        printf("Ky tu hoa tuong ung: %c\n", c - 32);
    } 
    else if (c >= 'A' && c <= 'Z') {
        // N?u là ch? hoa ? d?i thành ch? thu?ng
        printf("Ky tu thuong tuong ung: %c\n", c + 32);
    } 
    else {
        // N?u không ph?i ch? cái
        printf("Khong phai chu cai.\n");
    }

    return 0;
}

