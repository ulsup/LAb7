#include <stdio.h>
#include <stdlib.h>
#include "cs50.c"
#include "cs50.h"

//this program counts how much change do you need

int main() {
    float change;
    int sum = 0;
    do {
        printf("How much change do you need? ");
        change = GetFloat();
    } while (change <= 0);
    
    float ichange = change * 100;
    int new_change = (int) ichange;
    
    while (new_change >= 25) {
        new_change -= 25;
        sum++;
    }
    while (new_change >= 10) {
        new_change -= 10;
        sum++;
    }
    while (new_change >= 5) {
        new_change -= 5;
        sum++;
    }
    while (new_change >= 1) {
        new_change--;
        sum++;
    }
    printf("%d", sum);
}
