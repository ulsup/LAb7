#include <stdio.h>
#include <math.h>

// this program makes a cipher to the text by making a table
// it prints words reading letters vertically, not horizontally

char text[100];
char crypted[12][12];

int main() {
    char i;
    int counter = -1;
    printf("Enter a sentence: ");
    
    while (scanf("%c", &i) == 1 && i != '\n') {
        if (i != ' ') {
            counter++;
            text[counter] = i;
        }
    }
    
    int length = (int) sqrt(counter + 1);
    int height = length;
    int a, b;
    int exit = 0;
    for (b = length; b <= length + 1; b += 1) {
        for (a = height; a <= height + 1; a += 1) {
            if (a * b >= counter + 1) {
                exit = 1;
                break;
            }
        }
        if (exit == 1) {
            break;
        }
    }
    length = a;
    height = b;
    for (int a = 0; a <= counter; a += 1) {
        crypted[a / length][a % length] = text[a];
    }
    for (int b = 0; b < length; b += 1) {
        for (int a = 0; a < height; a += 1) {
            printf("%c", crypted[a][b]);
        }
        printf(" ");
    }
}