#include <stdio.h>
#include <stdlib.h>

/*
Memory Layout 1

int main()
{
    double a = 1;
    int b = 2;
    printf("Address of a: %p\n", (void *)&a);
    printf("Address of b: %p\n", (void *)&b);
    printf("Distance between a and b: %ld bytes\n", (char *)&b - (char *)&a);
    return 0;
}

Questions:
• Why is the distance between the two variables 4 bytes?
    Because integers take up 4 bytes in memory

• What would happen if we declared the variables as double instead of int?
    They would be 8 bytes apart

• What if we declared them as char?
    Only 1 byte apart

• What if we declare one as int and the other as double?
    int first, 4 bytes. double first, 8 bytes
*/




/*
Memory Layout 2

    int
    main() {
        Type a;
        size_t addr = (size_t)&a; // Get the address of a as an integer
        assert(addr % sizeof(Type) == 0);
        return 0;
    }

Questions:
• This function specifically, allows for the local objects to be placed at properrly aligned addresses
*/



/*
Memory Layout 3

int main() {
    int* heap_arr = (int*)malloc(1000 * sizeof(int));
    int stack_arr[1000];
    printf("Size of heap_arr (pointer): %zu bytes\n", sizeof(heap_arr));
    printf("Size of stack_arr (array): %zu bytes\n", sizeof(stack_arr));
    free(heap_arr);
    return 0;
}
Questions:
• The size of heap_arr is 8 bytes (on a 64-bit system) because it is a pointer to the first element of the allocated memory block.
• The size of stack_arr is 4000 bytes because it is an array of 1000 integers, and each integer typically takes up 4 bytes.

*/


/*
Casting 1

*/
int main() {
    
}