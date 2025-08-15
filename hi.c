#include <stdio.h>
void sum(int a, int b);
int main()
{
    int x,y;
    printf("Enter the first number ");
    scanf("%d",&x);
    printf("Enter the second number ");
    scanf("%d",&y);
    sum(x , y);
}
   void sum(int a ,int b)
   {
    int sum1= a+b;
    printf("%d\n",sum1);
   }