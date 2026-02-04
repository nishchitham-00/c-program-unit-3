//passing struct to function
#include <stdio.h>
struct Student {
int id;
char name [20];
};
void display(struct Student *s) {
printf("ID: %d\n", s->id);
printf("Name: %sn", s->name);
int main() {
struct Student s1 = {101, "Anu"};
display(&s1);
return 0;}
/*output
id :101
name:anu*/
