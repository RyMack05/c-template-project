/*
Author: Ryann Mack

Date: 10.21.2025

Description:
    Implementation of a modernized strerror() function using enums and typedefs.
    This program defines an ErrorCode enum and a function to get corresponding error messages.
*/

#include <stdio.h>
#include "errorHeader.h"

const char *getErrorMessage(ErrorCode code) {
    switch (code) {
        case MACCES: return "Permission denied";
        case MNOMEM: return "Out of memory";
        case MINVAL: return "Invalid argument";
        default:     return "Unknown error code";
    }
}

int main(void) {
    printf("Error %d: %s\n", MACCES, getErrorMessage(MACCES));
    printf("Error %d: %s\n", MNOMEM, getErrorMessage(MNOMEM));
    printf("Error %d: %s\n", MINVAL, getErrorMessage(MINVAL));

    return 0;
}

/* Questions:
    1) Invalid codes don’t need handling because enums restrict valid values.
    2) strerror() returns a pointer to a static internal buffer, while memory is
       managed by the function itself, so we never free it.
*/
