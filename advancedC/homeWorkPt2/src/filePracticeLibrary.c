/*
Description:
    This file contains the Library of file practice main

    readBook
        - Reads the contents of the given file into a continuous array.
        - Any non-alphabetic characters are replaced with spaces.
        FileName
            - Name of the file to read
        Contents
            - Pointer that will be allocated by the function and contains the books contents
Date: 10.1.2025

Author: Ryann Mack
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "filePracticeHeader.h"

void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

void readBook(const char* fileName, char** contents) {
    FILE **contents = fopen("fileName.txt", "r");
    
    if (contents == NULL) {
        fprintf(stderr, "Error opening file: %s\n", fileName);
        **contents = NULL;
        return;
    }
}