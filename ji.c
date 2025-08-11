#include <stdio.h>

int main() {
    char ch;

    printf("Enter q to quit: ");
    scanf(" %c", &ch);

    while (ch != 'q') {
        printf("You typed %c. Try again: ", ch);
        scanf(" %c", &ch);
    }

    printf("Goodbye!\n");
    return 0;
}
