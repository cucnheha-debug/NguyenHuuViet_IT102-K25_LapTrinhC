#include <stdio.h>

int main() {
    // Khoi tao mang gia co phieu qua cac thang
    int prices[] = {100, 90, 80, 110, 120};
    int n = sizeof(prices) / sizeof(prices[0]);

    // Gia mua vao la thang dau tien
    int buyPrice = prices[0];

    // Bien luu so lo nho nhat va thang tuong ung
    int minLoss = 0;
    int month = -1;

    for (int i = 1; i < n; i++) {
        int diff = prices[i] - buyPrice; // Loi nhuan hoac lo
        if (diff < 0) { // Chi tinh neu bi lo
            if (diff > minLoss || month == -1) {
                minLoss = diff;
                month = i + 1; // Cong 1 vi chi so bat dau tu 0
            }
        }
    }

    // Hien thi ket qua
    if (month == -1) {
        printf("Khong co thang nao bi lo, ban luon co lai.\n");
    } else {
        printf("Lo it nhat la %d khi ban vao thang %d\n", -minLoss, month);
    }

    return 0;
}

