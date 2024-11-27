#include <stdio.h>
int main() {
    int num, tongsole = 0;
    // Nhap 5 so nguyen
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so nguyen thu %d: ", i);
        scanf("%d", &num);
        // Kiem tra xem so co phai la so le khong
        if (num % 2 != 0) {
            tongsole += num;
        }
    }
    // In ra ket qua
    printf("Tong cac so le la: %d\n", tongsole);
    return 0;
}
