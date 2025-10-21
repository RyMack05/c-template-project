#include "superHeader.h"

int main(void) {
    int x = 5;
    superHeader(x == 5, "x should be 5");
    superHeader(x != 5, "x should not be 5");
    printf("Program finished.\n");
    return 0;
}