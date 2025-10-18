#include "myRectangle.h"
#include <stdio.h>

// Functions of Rectangle
    int area(Rectangle r) {
        return r.length * r.width;
    }

    void grow(Rectangle *r, int dw, int dl) {
        // Our new r variable points to the attributes of our rectanlge, so now we can change its size based on the change in width or length
        r->width += dw;
        r->length += dl;
    }

    int invalidCounter(int *invalidCount) {
        int *count = invalidCount;
        count = 0;

        while (*count <= 3) {
            printf("Invalid input, try again\n");
            count++;
        }

        printf("Too many errors\nExiting...\n");
        return 0;
    }