// demonstrat nested structure
#include<stdio.h>
typedef struct
{
float maths;
float cp;
float linux;
}subject;
typedef struct
{
int id;
char name [20];
subject marks;
}student;
int main()
{
student s1={1 ,"aaa",{90,93,92}};
student s2={2,"bbb",{90,88,93}};
printf("student 1 details :\n");
printf("id :%d name:%s marks: maths=%f cp=%f linux=%f",s1.id,s1.name,s1.marks.maths,s1.marks.cp,s1.marks.linux);
printf("student 2 details :\n");
printf("id:%d name:%s marks :maths:maths:%f cp:%f linux%f",s2.id,s2.name,s2.marks.maths,s2.marks.cp,s2.marks.linux);
return 0;
}
/*
student 1 details :
id :1 name:aaa marks: maths=90.000000 cp=93.000000 linux=92.000000student 2 details :
id:2 name:bbb marks :maths:maths:90.000000 cp:88.000000 linux93.000000*/
