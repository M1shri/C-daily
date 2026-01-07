#include <stdio.h>
int main()
{
    int temp1,temp2,temp3,temp4,temp5,temp6,temp7;                           //working variables
    struct Student {                                                         //struct student defining
        int uid;
        float marks;
        char course[50];
        char section;
    };
    struct Faculty{  
        char name[30];                                                       //struct faculty defining
        int employid;
        int salary;
    };
struct Student s1 = {1, 95.00, "Btech CSE", 'C'};                           //feeding values
struct Student s2 = {2, 85.00, "Btech Data Science", 'A'};
struct Student s3 = {3, 75.00, "Btech AI", 'D'};

struct Faculty f1 = {"Dr. Ravi Sharma", 01, 90000};
struct Faculty f2 = {"Dr. Mandeep Singh",02, 100000};
struct Faculty f3 = {"Dr. Riya Gupta",03, 120000};

//idea : adding a infinite loop which keeps bringing us back to menu after the task until the user chooses to quit
while(1)
{   
    printf("\n \n");
    printf("            \033[1mMenu\033[0m\n");
    printf("1.Student \n2.Faculty\n3.Exit Program\n");
    scanf("%d",&temp1);
    if(temp1==1)                                                        //Student Dashboard Section
        {
            printf("Student Dashboard \n");
            printf("1.View Student Details  \n2.Enroll New Student  \n");
            scanf("%d",&temp2);
        
        if(temp2==1)
            {                                                           //view student detail
            printf("enter student UID : ");
            scanf("%d",&temp3);
                if(temp3 == s1.uid){
                    printf("Student UID - %d\n",s1.uid);
                    printf("Student Marks - %0.2f\n",s1.marks);
                    printf("Student course - %s\n",s1.course);
                    printf("Student section - %c\n",s1.section);
                }
                else if(temp3 == s2.uid){
                    printf("Student UID - %d\n",s2.uid);
                    printf("Student Marks - %0.2f\n",s2.marks);
                    printf("Student course - %s\n",s2.course);
                    printf("Student section - %c\n",s2.section);
                }
                else if(temp3 == s3.uid){
                    printf("Student UID - %d\n",s3.uid);
                    printf("Student Marks - %0.2f\n",s3.marks);
                    printf("Student course - %s\n",s3.course);
                    printf("Student section - %c\n",s3.section);
                }
                else
                printf("Student Not Found\n");
            }
            
            if(temp2==2)                                                        //register new student
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
            printf("Student Marks - %f\n",s4.marks);
            printf("Student course - %s\n",s4.course);
            printf("Student section - %c\n",s4.section);
            }
        }   

    if(temp1==2)
        {
            printf("Faculty Dashboard \n");                                //Faculty Dashboard
            printf("1.Faculty Details \n2.Mark Attendance \n3.Suspend Student \n");
            scanf("%d",&temp4);
            if(temp4==1)                                                    //print Faculty details
            {
                printf("enter Faculty UID : ");
                scanf("%d",&temp5);
                if(temp5 == f1.employid){
                    printf("Faculty Name - %s\n",f1.name);
                    printf("Faculty Employ ID - %d\n",f1.employid);
                    printf("Faculty Sallary - %d\n",f1.salary);
                }
                else if(temp5 == f2.employid){
                    printf("Faculty Name - %s\n",f2.name);
                    printf("Faculty Employ ID - %d\n",f2.employid);
                    printf("Faculty Sallary - %d\n",f2.salary);
                }
                else if(temp5 == f3.employid){
                    printf("Faculty Name - %s\n",f3.name);
                    printf("Faculty Employ ID - %d\n",f3.employid);
                    printf("Faculty Sallary - %d\n",f3.salary);
                }
                else
                printf("Faculty Not Found\n");
            }
            if(temp4==2)                                                   //Faculty Attendance
                {
                        printf("Enter UID of Students present or input 9 for exit \n");
                        while(1)
                            {
                                scanf("%d", &temp6);
                                if (temp6 == 9)
                                    break;
                                printf("Attendance Marked for %d\n", temp6);
                            }

                }

                

            if(temp4==3)
            {                                                                      //Faculty Removing student details
                printf("enter uid of the student to be remmoved :- ");
                scanf("%d",&temp7);
                    if(temp2==s1.uid)
                        {
                        struct Student s1 = {0};
                        printf("Successfully Deleted");
                        }
                    else if(temp7==s2.uid)
                        {
                        struct Student s2 = {0};
                        printf("Successfully Deleted");
                        }
                    else if(temp7==s3.uid)
                        {
                        struct Student s3 = {0}; 
                        printf("Successfully Deleted");
                        }
                    else
                    {printf("Student not found");}
            }
        }
        if(temp1==3)                                                //Exit Program
        return 0;
    }
}   
