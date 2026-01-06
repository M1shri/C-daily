#include <stdio.h>
int main()
{
    int temp1,temp2;
    struct Student {
        int uid;
        float marks;
        char course[50];
        char section;
};
    struct Faculty{
        int employid;
        float salary;
    };
struct Student s1 = {1, 95.00, "Btech CSE", 'C'};
struct Student s2 = {2, 85.00, "Btech Data Science", 'A'};
struct Student s3 = {3, 75.00, "Btech AI", 'D'};
//idea : adding a infinite loop which keeps bringing us back to menu after the task until the user chooses to quit
printf("      Menu       \n");
printf("1.Student \n2.Faculty\n");
scanf("%d",&temp1);
if(temp1==1)
    {
    printf("Student Dashboard \n");
    printf("1.View Student Details -\n2.Enroll New Student - \n3.Suspend Student\n");
    scanf("%d",&temp2);
    
    if(temp2==1){
        printf("enter student UID : ");
        scanf("%d",&temp1);
            if(temp1 == s1.uid){
                printf("Student UID - %d\n",s1.uid);
                printf("Student Marks - %0.2f\n",s1.marks);
                printf("Student course - %s\n",s1.course);
                printf("Student section - %c\n",s1.section);
            }
            if(temp2 == s2.uid){
                printf("Student UID - %d\n",s2.uid);
                printf("Student Marks - %0.2f\n",s2.marks);
                printf("Student course - %s\n",s2.course);
                printf("Student section - %c\n",s2.section);
            }
            if(temp1 == s3.uid){
                printf("Student UID - %d\n",s3.uid);
                printf("Student Marks - %0.2f\n",s3.marks);
                printf("Student course - %s\n",s3.course);
                printf("Student section - %c\n",s3.section);
        }
    }
    if(temp2==2)
        {
        printf("Enter New Student Details \n");
        struct Student s4;
        printf("UID = ");
        scanf("%d", &s4.uid);
        printf("course = ");
        scanf("%s",s4.course);
        printf("Section = ");
        scanf(" %c", &s4.section);
        printf("marks = ");
        scanf("%f",&s4.marks);
        
        printf("New student :- \n");
        printf("Student UID - %d\n",s4.uid);
        printf("Student Marks - %0.2f\n",s4.marks);
        printf("Student course - %s\n",s4.course);
        printf("Student section - %c\n",s4.section);

        }
    if(temp2==3)
        {
        printf("enter uid of the student to be remmoved :- ");
        scanf("%d",&temp2);
        if(temp2==s1.uid)
            {
            struct Student s1 = {0};
            }
        if(temp2==s2.uid)
        {
            struct Student s2 = {0};
        }
        if(temp2==s3.uid)
        {
            struct Student s3 = {0};
        }
}