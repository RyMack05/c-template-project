#include <stdio.h>
#include <stdlib.h>
#include "filePracticeHeader.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char* contents = NULL;
    readBook(argv[1], &contents);

    if (contents == NULL) {
        return 1;  // error message already printed by readBook
    }

    toLowerCase(contents);

    printf("Preview of processed text:\n\n");
    for (int i = 0; i < 300 && contents[i] != '\0'; i++) {
        putchar(contents[i]);
    }
    printf("\n");

    free(contents);
    return 0;
}