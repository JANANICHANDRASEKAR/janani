#include<stdio.h>
void main()
{
int n,b,i,j;
scanf("%d",&n);
int a[n];
printf("the input of an array is");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the output of an array is");
for(j=0;j<n;j++)
{
printf("%d",a[j]);
}
}
