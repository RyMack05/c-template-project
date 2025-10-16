#include <stdio.h>

// enums have values in the background, starting from 0, incrementing by 1 for each subsequent name
// So RED is 0, BLUE is 1, GREEN is 2
// The compiler knows that when it sees the first value, in this case RED, it knows it is 0 and acts accordingly
// This number isn't necessarily stored in memory, its really the compiler that does the "magic" of associating the name with the number

typedef enum {
    RED,
    BLUE,
    GREEN

} Color;

void decide(Color c){
    switch(c){
        case RED:
            printf("Color is Red\n");
            break;
        case BLUE:
            printf("Color is Blue\n");
            break;
        case GREEN:
            printf("Color is Green\n");
            break;
    }
}

// Old use, but now we use enumerators (above) instead, much better!
#define RED 0
#define BLUE 1
#define GREEN 2
typedef int Color;

int main(){
    Color someColor = RED;
    decide(someColor);
    Color anotherColor = BLUE;
    decide(anotherColor);
    Color yetAnotherColor = GREEN;
    decide(yetAnotherColor);
    return 0;
}