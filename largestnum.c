#include<stdio.h>
int main()
{
int a[10],i,j,n;
printf("enter the number");
for(i=1;i<10;i++)
scanf("%d",&a[i]);
n=a[0];
for(j=0;j<10;j++)
{
if(n<a[j])
n=a[j];
}
printf("the largest number is %d:",n);
return 0;
}
