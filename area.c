# include<stdio.h>
int main()
{
    int length;
    int breadth;
    char name[20];
    int area;
    printf("enter your Name \n");
    fgets(name, sizeof(name), stdin);
    printf("enter the length- ");
    scanf("%d",&length);
    printf("enter the breadth- ");
    scanf("%d",&breadth);
    area= length *breadth;
    printf("area :- %d",area);
    return 0;

}