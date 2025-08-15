#include <stdio.h>
void check(int a, int b);

int main()
{
    int a =2;
    int b= 4;
    printf("%d \n%d\n", a , b);
    check( a , b);
}

void check( int a , int b)
{
    printf("%d \n%d",a ,b);
}