#include <stdio.h>

int main() {
    int a, b, sum;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Add them
    sum = a + b;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}