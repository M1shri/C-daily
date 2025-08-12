#include <stdio.h>
void hello();
void goodbye();
int main()
{
    hello( );
    goodbye();
    return 0;
}
void hello()
{
    printf("HELLO");
}
void goodbye()
{
    printf("GOODBYE");
}