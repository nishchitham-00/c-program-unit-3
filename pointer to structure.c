// pointer to structure
#include <stdio.h>
struct Student {
int id;
char name [20];
};
int main() {
struct Student s = {101, "nnnn"};
struct Student *ptr = &s;
printf("ID: %d\n", ptr->id);
printf ("Name: %sn", ptr->name);
return 0;}
/*ID: 101
Name: nnnnn*/
