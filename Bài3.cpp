#include <stdio.h>
#include <string.h>
int main() {
    char mat_khau_thuc_te[20] = "123456"; // Mat khau thuc te
    char mat_khau_nhap[20];

    printf("Nhap mat khau: ");
    scanf("%s", mat_khau_nhap);

    // So sanh hai chuoi mat khau
    if (strcmp(mat_khau_nhap, mat_khau_thuc_te) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
