#include<stdio.h>
void main()
{
int first=0,second=1,temp,n,i;
printf("Enter the range");
scanf("%d",&n);
printf("%d %d",first,second);
for(i=1;i<n;i++)
{
temp=first+second;
first=second;
second=temp;
printf(" %d",second);
}

}
