#include <stdio.h>
void sum(int a , int b);
int sum1=0;
int a,b;
int main()
{
    
    printf("enter the first number- ");
    scanf("%d",&a);
    printf("enter the second number- ");
    scanf("%d",&b);
    sum(a,b);
}

void sum(int a, int b)
{
    sum1 = a+b;
    printf("SUM = %d",sum1);
    
}