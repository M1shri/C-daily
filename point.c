#include <stdio.h>
int main()
{
    int a = 02, b=12;
    int *ptr = &a;
    int *i = &b;
    
    printf("%p",*ptr);
    printf("\n");
    printf("%p",i);

}