//dynamic memory allacation = callalloc and free
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *arr;
arr=(int*)calloc(5,sizeof(int));
for(int i=0;i<5;i++)
 printf(" %d ",arr[i]);
free(arr);
return 0;}
/* output
0 0 0 0 0
*/
