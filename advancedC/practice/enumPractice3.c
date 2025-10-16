/**
 * @brief Sums two integers
 * @param a The first integer
 * @param b The second integer
 * @return The sum of a and b
 */

#include <stdio.h>

typedef unsigned int uint;
// What we are doing here is creating an "alias" for unsigned int to shorten the variable name

typedef struct {
    float a;
} flo;

int main() {
    unsigned int a = 5;
    uint b = 10; // using typedef to create an alias for unsigned int
    printf("a: %u, b: %u\n", a, b);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

// the (*operation) means that when we output, we can pass any function we want in that spaces, and put the integers
typedef int(*Operation)(int a, int b);

void operateNPrint(Operation op, int a, int b) {
    // perform the operation
    int result = op;
    printf("%d\n", result);
}

int main() {
    operateNPrint(sum, 1, 1);
    operateNPrint(multiply, 2, 5);
}