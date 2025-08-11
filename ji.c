#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);  // repeats if input is not positive

    printf("You entered %d\n", num);
    return 0;
}

// This program prompts the user to enter a positive number and continues to ask until a valid input is given.