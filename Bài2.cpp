#include <stdio.h>

int main() {
    int songuyen, demchan = 0, demle = 0;
    // Nhap 5 so nguyen
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so nguyen thu %d: ", i);
        scanf("%d", &songuyen);
        // Kiem tra so chan le
        if (songuyen % 2 == 0) {
            demchan++;
        } else {
            demle++;
        }
    }
    // In ket qua
    printf("So luong so chan: %d\n", demchan);
    printf("So luong so le: %d\n", demle);
    return 0;
}
