#include <stdio.h>
int main() {
    int a, b, c, choice;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Sum = %d\n", a + b + c);
            break;
        case 2:
            printf("Subtract = %d\n", a - b - c);
            break;
        case 3:
            printf("Product = %d\n", a * b * c);
            break;
        case 4:
            if(b != 0 && c != 0)
                printf("Divide = %d\n", a / b / c);
            else
                printf("Division by zero error\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}