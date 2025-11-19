#include <stdio.h>
int main()
{
    int age=25;
    int age3=55;
    int age2=105;
    int *ptr = &age;
    int *ptr2= &age3;
    printf("The difference= %u \n", ptr - ptr2);
    return 0;
}