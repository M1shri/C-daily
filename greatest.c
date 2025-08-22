#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three values= \n");
    scanf("\n %d \n%d \n%d",&a ,&b ,&c);
    int greatest = (a>b) ? ((a>c) ? a : c) : (c>b) ? c : b;
    printf ("%d",greatest);
}