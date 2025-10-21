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

    // Find the file size first
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    // Allocate enough memory for entire file + null terminator
    *contents = malloc(fileSize + 1);
    if (*contents == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return;
    }

    int c;
    long i = 0;
    while ((c = fgetc(file)) != EOF) {
        if (!isalpha(c)) {
            c = ' ';
        }
        (*contents)[i++] = (char)c;
    }
    (*contents)[i] = '\0'; // terminate string

    fclose(file);
}