#include <stdio.h>

int main()
{
    int num, prime=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            prime++; 
        }
    
    }
    if(prime == 2)
    printf("%d is a prime number\n", num);
    else
    printf("%d is not a prime number\n", num);  
}