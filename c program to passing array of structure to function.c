#include<stdio.h>
struct student
{
int id;
char name[20];
};
void display(struct student s[],int n)
{
for(int i=0;i<n;i++)
printf(" id:%d name:%s \n",s[i].id,s[i].name);}
int main(){
struct student s[3]={{101,"aaa"},{102,"bbb"},{103,"ccc"}};
display(s,3);
return 0;
}
/*output
id:101 name:aaa
id:102 name:bbb
id:103 name:ccc*/
