#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>c)||(a>b))
{
printf("a is largest");
}
elseif((b>c)||(b>a))
{
printf("b is largest");
}
else
{
printf("c is largest");
}
}
