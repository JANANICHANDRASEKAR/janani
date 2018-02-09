#include<stdio.h>
void main()
{
int a,i,min,max;
int b[10];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
min=max=b[0];
for(i=0;i<a;i++)
{
if(b[i]<min)
{
min=b[i];
}
}
printf("%d\t",min);
for(i=0;i<a;i++)
{
if(b[i]>max)
{
max=b[i];
}
}
printf("%d",max);
}

