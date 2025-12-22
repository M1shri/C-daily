#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",& arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {   int count = 0;
        for(int num=(i+1);num<n;num++)
        {
            if (arr[i]== arr[num])
            {
                count++;
            }
            
        }
        printf("number of times %d is repeated = %d",arr[i] ,count);
    }

    return 0;
}