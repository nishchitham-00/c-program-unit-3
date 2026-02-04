// dynamic memory allacation = realloc free
#include<stdio.h>
#include<stdlib.h>
int main(){
int*arr;
arr=(int*)malloc(5*sizeof(int));
for(int i=0;i<5;i++)
{
arr[i]=i+1;
}
arr=(int*)realloc(arr,7*sizeof(int));
for(int i=0;i<7;i++)
arr[i]=i+1;
for(int i=0;i<7;i++)
printf(" %d ",arr[i]);
free(arr);
return 0;
}
/*output
1 2 3 4 5 6 7
*/

