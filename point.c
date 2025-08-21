#include <stdio.h>
int main()
{
    int a = 0;
    int ptr = 5;
    
    printf("%p",*&a);
    printf("haha %p",*&ptr);

}