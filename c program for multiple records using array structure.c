//program to store and display multiple students records using array of
#include <stdio.h>
struct student
{
int id;
char name[20];
float marks ;
};
int main()
 {
struct student s1[2]={{101,"aaaa",50},{102,"bbb",60}};
for (int i=0;i<2;i++)
printf("ID:%d name:%s marks :%f \n",s1[i].id,s1[i].name,s1[i].marks);
return 0;
}
/*
ID:101 name:aaaa marks :50.000000
ID:102 name:bbb marks :60.000000*/
