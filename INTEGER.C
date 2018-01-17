#include<stdio.h>
void main()
{
int n;
int count=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("the no of digits %d",count);
}
