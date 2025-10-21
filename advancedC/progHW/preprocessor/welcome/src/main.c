/*
Author: Ryann Mack

Date: October.21.2025

Description: 
    This is a simple C program that utilizes a preprocessor directive to include a header file. 
    The program prints a welcome message to the console by calling a function defined in the included header file. 
*/

#include <stdio.h>
#include "welcomeHeader.h"

int main(void) {
    const char *msg = get_welcome_msg();
    printf("%s\n", msg);
    return 0;
}
