#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("Gia tri cua bien: %d\n", x);
    printf("Dia chi cua bien: %p\n", (void*)&x);

    printf("Gia tri cua bien (qua con tro): %d\n", *ptr);
    printf("Dia chi cua bien (qua con tro): %p\n", (void*)ptr);

    return 0;
}

