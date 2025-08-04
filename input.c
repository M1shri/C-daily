# include <stdio.h>
int main()
{
    char name[20];
    int age;
    float marks;
    printf("name");
    scanf("%s",name);
    printf("age");
    scanf("%d",&age);
    printf("marks");
    scanf("%f",&marks);
    printf("%s \n %d \n %.2f",name , age, marks);
    return 0;
   
    

}