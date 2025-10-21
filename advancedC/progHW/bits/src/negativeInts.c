#include <stdio.h>

void print_bits32(int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main(void) {
    print_bits32(1);   // Positive number
    print_bits32(-1);  // Negative number (two's complement)
    return 0;
}

/*
Explanation:
- 1  -> 00000000 00000000 00000000 00000001
- -1 -> 11111111 11111111 11111111 11111111
Because negative integers in C are represented using two’s complement:
invert the bits of the positive number and add 1.
*/
