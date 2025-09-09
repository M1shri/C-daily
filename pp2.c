#include <stdio.h>
#include <math.h>
int main() 
{
    int choice, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Positive or Negative\n");
    printf("3. Print Square\n");
    printf("4. Print Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) 
{        case 1:
            if (num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
            break;
         case 2:
            if (num > 0)
                printf("%d is Positive\n", num);
            else if (num < 0)
                printf("%d is Negative\n", num);
            else
                printf("Number is Zero\n");
            break;
        case 3:
            printf("Square of %d is %d\n", num, num * num);
            break;
        case 4:
            if (num >= 0)
                printf("Square Root of %d is %.2f\n", num, 		sqrt(num));
            else
                printf("Square root of negative number is not 	real.\n");
            break;
        default:
            printf("Invalid choice.\n");
}
    return 0;
}
