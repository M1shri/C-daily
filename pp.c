#include <stdio.h>
void onetoten();
void sumofN(int n);
void even(int n);
void reverse();



int main(){
    int N;
    printf("Enter the value of N= ");
    scanf("%d",&N);
    reverse();
}

void onetoten(){
    int i=1;
    while(i<=10)
    {
        printf("%d ",i);
        
        i++;
    }
}

void sumofN(int n){
    
    int i=1;
    int sum =0;
    while(i<=n)
    {
       sum = sum + i;
       i++; 
    }
    printf("%d",sum);
    
}

void even(int n){
    int i=0;
    int sum1 =0;
    while(i<=n)
    {
        if(i%2==0)
        {
        sum1 = sum1 +i;
        }
        i++;
    }
    printf("%d",sum1);
}

void reverse(){
    int num;
    printf("ENTER A LONG NUMBER =");
    scanf("%d",&num);
    int i=0;
    while(num!=0)
    {
        int rem = num % 10;
        i = i * 10 + rem;
        num = num/10;
    }
    printf("%d",i);
}
