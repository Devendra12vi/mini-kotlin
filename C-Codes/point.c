
#include<stdio.h>
#include<conio.h>
typedef struct student_detail
{
    int rollno;
    char name[80];
    float percentage;
}student;
int main()
{
     student s[3];
     student *p=&s[0];
printf("Enter five Students details \n");
for (int  i = 0; i < 3; i++)
{
//    for (int j = 0; j < 3; j++)
  //  {
        printf("Enter Roll no:");
        scanf("%d",&s[i].rollno);
        printf("Enter Student Name:");
        scanf(" %[^\n]s",&s[i].name);

        printf("Enter Percentage of marks:");
        scanf("%f",&s[i].percentage);
    //   }
}
    printf("To print student details\n");
    for (int i = 0; i < 3; i++,p++)
    {
        printf("Roll number:%d\n",p->rollno);
        printf("student name:%s\n",p->name);
        printf("percentage:%.2f\n",p->percentage);   
    }
    
     return 0;
}
