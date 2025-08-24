#include <stdio.h>
int main()
{
    int a = 2, b=12;
    int *ptr = &a;
    int *i = &b;
    
    printf("%p",*ptr);
    printf("\n");
    printf("%p",&a);
    return 0;
}