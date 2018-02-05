#include<stdio.h>
void main()
{
int i,count=0;
char a[100] ="ece.a.cse.";
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='.')
    count=count+1;
}
printf("the lines are %d",count);
}
