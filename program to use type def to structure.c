// using typedef
#include<stdio.h>
typedef struct
{
int id;
char name [20];
float marks;
}student;
int main()
{
student s1;
student s2;
printf(" enter student 1 details :");
scanf("%d %S%f",&s1.id,s1.name,s1.marks);

printf("enter student 2 details :");
scanf("%d%S%f",s2.id,s2.name,s2.marks);

printf("student 1 details :");
printf(" id no :%d name%s marks %f " ,s1.id,s1.name,s1.marks);

printf("student 2 details :");
printf(" idno:%d name:%s marks:%f",s2.id ,s2.name,s2.marks);
return 0;
}
/* output
enter student 1 details : 1 aaa 90
enter student 2 details : 2 bbb 95
id no:1 name:aaa marks:90
id no:2 name:bbb marks :95
*/
