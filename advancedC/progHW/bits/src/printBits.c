#include <stdio.h>

void print_bits32(int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
        if (i % 8 == 0) printf(" "); // for readability
    }
    printf("\n");
}

int main(void) {
    print_bits32(0xDEADBEEF);
    return 0;
}
