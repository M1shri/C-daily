#include <stdio.h>
int main()
{
    int n, sum = 0, num = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    while(num <= n)
    {
        sum += num;
        num += 2;
    }
    printf("Sum of even numbers up to %d: %d\n", n, sum);
    return 0;
}