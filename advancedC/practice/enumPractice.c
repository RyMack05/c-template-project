// Questions:

// 1. When do we use enum, vs struct, vs #define preprocessor directive?

// Answer: We use enum when we have a set of related named constants, like days of the week, colors, etc. 
//         We use struct when we want to group related variables of different types together, like a point with x and y coordinates. 
//         We use #define preprocessor directive for defining constants or macros that do not require type safety or grouping. 
//         we could do enum or #define for days of the week, but enum is preferred as it provides better type safety and readability.

#include <stdio.h>

// We could do struct, but we'd have to give it a type not just the name in enum

// Using typedef to avoid writing 'enum' keyword every time when declaring a variable of this type, 
// so instead of isItMonday(enum Day day) we can write isItMonday(Day day), where we are making a variable "day" of type "DAY"
   
typedef enum { 
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

int isItMonday(Day day){
    return day == MONDAY;
}

// This is equivalent to the above function but using #define preprocessor directive 
#define TUESDAY 0

int isItTuesday(int day){
    return day == TUESDAY; // This will always return true as we have defined TUESDAY as 0 using #define preprocessor directive
}

typedef enum {
    CIRCLE,
    LINE
} Shape;

int main() {
    Shape s = LINE;
    printf("Shape is: %d\n", s);
    return 0;
}

