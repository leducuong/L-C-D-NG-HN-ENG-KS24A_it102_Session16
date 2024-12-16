#include <stdio.h>
void inMang(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("Phan tu thu %d: %d\n", i, *(mang + i));
    }
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    inMang(mang, kichThuoc);
    return 0;
}

