#include <stdio.h>
#include <stdlib.h>

//this program prints in letters an integer number if it's more than 0 and less than 10
//if the number is more or equal 10, it prints whether it's eval or odd

int main() {
    int a, b, n;
    scanf("%d", &a);
    scanf("%d", &b);
    char arr[9][10] = {"one", "two", "three", "four", "five", "six",
                       "seven", "eight", "nine"};

    if (a < b) {
        for (n = a; n <= b; n++) {
            if (n >= 1 && n <= 9) {
                printf(arr[n - 1]);
                printf("\n");
            } else {
                if (n % 2 == 0) {
                    printf("even\n");
                } else {
                    printf("odd\n");
                }
            }
        }
    } else {
        printf("lol");
    }
    return 0;
}