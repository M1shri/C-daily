#include <stdio.h>
int main()
{
    int arr[5];
    int greatest=0;
    int grts;
    printf("enter values");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    greatest = arr[0];
    for(int i=0; i<5; i++)
    {
    if(arr[i]>greatest)
    greatest= arr[i];
    grts = i;
    }   
    printf("%d \n",greatest);
    int secg =0;

    for(int i=0; i<5; i++)
    {
        if(i == grts)
        continue;
        else
        if(arr[i]>=secg)
        secg = arr[i];
    }
    printf("%d",secg);

}