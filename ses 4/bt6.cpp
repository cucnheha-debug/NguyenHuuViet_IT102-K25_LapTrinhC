#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDien;
    float tienDien;

    printf("Nhap chi so cu (dau thang): ");
    scanf("%d", &chiSoCu);

    printf("Nhap chi so moi (cuoi thang): ");
    scanf("%d", &chiSoMoi);

    // Tính s? di?n tiêu th?
    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0) {
        printf("Chi so moi phai lon hon chi so cu!");
        return 0;
    }

    // Tính ti?n di?n theo b?ng giá
    if (soDien < 50) {
        tienDien = soDien * 10000;
    } else if (soDien < 100) {
        tienDien = soDien * 15000;
    } else if (soDien < 150) {
        tienDien = soDien * 20000;
    } else if (soDien < 200) {
        tienDien = soDien * 25000;
    } else {
        tienDien = soDien * 30000;
    }

    printf("So dien tieu thu: %d kWh\n", soDien);
    printf("Tien dien phai tra: %.0f VND", tienDien);

    return 0;
}

