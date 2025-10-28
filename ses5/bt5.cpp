#include <stdio.h>

int main() {
    int tuoi;
    float giaVeCoBan = 20000;
    float soTienPhaiTra;

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    if (tuoi < 0 || tuoi > 120) {
        // Ki?m tra d? li?u không h?p l?
        printf("Tuoi khong hop le\n");
        return 0;
    }

    if (tuoi < 6)
        soTienPhaiTra = 0;
    else if (tuoi <= 18)
        soTienPhaiTra = giaVeCoBan * 0.5;
    else if (tuoi <= 60)
        soTienPhaiTra = giaVeCoBan * 1.0;
    else
        soTienPhaiTra = giaVeCoBan * 0.7;

    printf("So tien ve : %.0f VND\n", soTienPhaiTra);

    return 0;
}

