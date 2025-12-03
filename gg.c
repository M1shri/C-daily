#include <stdio.h>
#include <string.h>
int main()
{
    struct info{
        char name[100];
        int roll;
    };
    struct info s1={"Krish", 1214};
    printf("%d\n",s1.roll);
   printf("%s",s1.name);
}