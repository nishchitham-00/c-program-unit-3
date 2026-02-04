//memory alloc
#include <stdio.h>
#include<stdlib.h>
int main()
{
int*arr,sum=0;
arr=(int*)malloc(5*sizeof(int));
for(int i=0;i<5;i++)
{
arr[i]=10+sum;
sum=arr[i];}
for(int i=0;i<5;i++)
printf(" %d ",arr[i]);
free(arr);
return 0;
}
/*output
10 20 30 40 50*/
