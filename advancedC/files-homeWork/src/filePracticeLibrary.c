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
    int i = 0;
    while (str[i] != '\0') {
        str[i] = (char)tolower((unsigned char)str[i]);
        i++;
    }
}

void readBook(const char* fileName, char** contents) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", fileName);
        *contents = NULL;
        return;
    }

    // allocate a simple fixed buffer (large enough for short texts)
    char* buffer = malloc(1000000); // 1 MB
    if (buffer == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        *contents = NULL;
        return;
    }

    int i = 0;
    int c;
    while ((c = fgetc(file)) != EOF) {
        if (!isalpha(c)) {
            c = ' '; // replace non-letters with space
        }
        buffer[i++] = (char)c;
    }
    buffer[i] = '\0';

    fclose(file);
    *contents = buffer;
}