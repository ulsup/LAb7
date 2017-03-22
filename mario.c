#include <stdio.h>
#include "cs50.c"
#include "cs50.h"

//this program prints a piramyd of inputed height from Mario game

int main() {
    int height, line, space, symb;
    height = GetInt();

    while ((height <= 1) || (height >= 24)) {
        printf("Retry: ");
        height = GetInt();
    }

    for (line = 1; line <= height; line += 1) {
        for (space = height - line; space > 0; space -= 1) {
            printf(" ");
        }
        for (symb = 1; symb <= (line + 1); symb += 1) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}