#include <stdio.h>

void capNhatPhanTu(int *mang, int viTri, int giaTriMoi) {
    *(mang + viTri) = giaTriMoi;
}

void inMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(mang + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau: ");
    inMang(mang, kichThuoc);

    capNhatPhanTu(mang, 2, 99); 

    printf("Mang sau khi cap nhat: ");
    inMang(mang, kichThuoc);

    return 0;
}

