# include <stdio.h>
int fiboo(int num);
int num = 0;
int main()
{
    printf("enter the value of n \n");
    scanf("%d",&num);
    fiboo(num);

}
int fiboo(int num)
{
    int sum= 0;
    for(int i =0;i<=num ; i++)
    {
      sum = (i-1)+(i-2);

    }
    printf("%d",sum);
}