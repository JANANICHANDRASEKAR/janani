#include<stdio.h>
int main()
{
	int base,exp,result;
	result=0;
	printf("enter base and exponential");
	scanf("%d%d",&b,&e);
	while(e!=0)
	{
		result=b*b;
		--e;
	}
	printf("power is %d",result);
}
