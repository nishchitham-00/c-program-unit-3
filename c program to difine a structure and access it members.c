// program to difine a structure and access it member
#include<stdio.h>
struct student
{
int id;
char name[20];
float marks;
};
int main()
{
struct student s1={1,"aaa",95.5};
struct student s2={2,"bbb",90};

printf(" student 1 details : \n");

printf( "ID :%d ",s1.id);
printf("name:%s",s1.name);
printf(" marks :%f",s1.marks);
printf("\n");
printf(" student 2 details : \n");
printf(" ID:%d name:%s marks:%f\n",s2.id,s2.name,s2.marks);
return 0;
}
/*output
student 1 details:
ID:1 name:aaa marks:95.5

student 2 details:
ID:2 name:bbb marks:95
