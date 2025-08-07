#include <stdio.h>
int main()
{
    char c;
    printf("Enter any Alphabet - \n");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("UPPERCASE");
    }
    else
    printf("LOWERCASE");
    return 0;
}