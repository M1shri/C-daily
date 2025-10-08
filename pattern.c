#include <stdio.h>

/*
      *   --- 3 space , odd star (1)
    * * * ---- 2 space , odd star (3)
  * * * * *
*/


    int main()
    {
        int num;
        printf("enter=");
        scanf("%d",&num);
        for(int i=1; i<=num;i++)
        {
            for(int j=num-i; j>=1;j--)
            {
            printf(" ");
            }
            for(int k=(2*i) - 1; k>=1; k--)
            {printf("*");}
            printf("\n");
        }
        for(int i=num;i>=1;i--)
        {
            for(int j=num-i;j>=1;j--)
            printf(" ");
            for(int k=2*i-1;k>=1;k--)
            printf("*");
            printf("\n");
        }


    }
    