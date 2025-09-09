Aim

Write a program to check whether the entered year is a leap year or not.
Note: For century years, check divisibility by 400 instead of 4.

Algorithm

Start

Input the year.

If the year is divisible by 400 → it is a leap year.

Else if the year is divisible by 100 → it is not a leap year.

Else if the year is divisible by 4 → it is a leap year.

Else → it is not a leap year.

Print the result.

Stop

Code (C Program)
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else if (year % 100 == 0)
        printf("%d is not a leap year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}