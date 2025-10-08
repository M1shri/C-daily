
#include<stdio.h>
int main()
{
    int m;
    int a[10];
    printf("Enter elemnets 10 elements");
   
    for(int i=0; i<10; i++)
    {
        scanf("%d",a[i]);
    }

    printf("Enter elemnet to find");
    scanf("%d",m);

    for(int i=0; i<10; i++)
    {
        if(m==a[i])
        printf("Element found at postion "+(i+1));
        
    }
}