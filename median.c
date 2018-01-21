include<stdio.h>
int main()
{
int n,i,j;
float m;
scanf("%d",&n);
int a[n];

printf("\nthe stored value are");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d  ",a[i]);
}
for(j=0;j<n;j++)
{
m=m+a[j];
}

m=m/n;
printf("\n the median valuve is %f",m);

return 0;
}
