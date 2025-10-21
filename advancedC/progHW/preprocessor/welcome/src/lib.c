#include <stdio.h>
#include "welcomeHeader.h"

#ifndef LANGUAGE
    #define LANGUAGE EN   /* Default language */
#endif

#define HELLO_EN "Hello, World!"
#define HELLO_ES "¡Hola, Mundo!"

const char *get_welcome_msg(void) {
#if LANGUAGE == EN
    return HELLO_EN;
#elif LANGUAGE == ES
    return HELLO_ES;
#else
    fprintf(stderr, "Error: LANGUAGE not supported.\n");
    return "Language error.";
#endif
}
