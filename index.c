#include<stdio.h>
void main()
{
 int n,i,a[n];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
 scanf("%d ",&a[i]);
 }
for(i=0;i<n;i++)
{
 printf("%d %d",a[i],i);
}
}
