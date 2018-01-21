#include<stdio.h>
void main()
{
 int n;
scanf("%d\n",&n);
int a[n];
int i;
for(i=0;i<n;i++)
{
 scanf("%d ",&a[i]);
 }
for(i=0;i<n;i++)
{
 printf("%d %d\n",a[i],i);
