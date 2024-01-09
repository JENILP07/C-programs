/*student info*/
#include<stdio.h>
struct student{
    char name[30];
    int roll;
    float cpi;//mobile number
    int backlog;
};
int main(){
    struct student s1;
    printf("Enter Student Name: ");
    scanf("%s",s1.name);
    printf("Enter Student roll: ");
    scanf("%d",&s1.roll);
    printf("Enter Student Cpi: ");
    scanf("%f",&s1.cpi);
    printf("Enter Student backlog:");
    scanf("%d",&s1.backlog);
    printf("Student : %s ",s1.name);
    printf("\nStudent roll : %d",s1.roll);
    printf("\nstudent Cpi : %f",s1.cpi);
    printf("\nStudent backlog : %d",s1.backlog);
    return 0;
}