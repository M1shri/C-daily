#include <stdio.h>
int square(int n);
int main()
{
    int number = 5;
    int answer = square(number);
    printf("The Number is= %d",answer);
}

int square(int n){
     n = n*n;
    printf("The Square is= %d  \n",n);
    return n;
}