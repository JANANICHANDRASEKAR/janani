#include<stdio.h>
void main()
{
int a,d,r;
printf("enter the number");
scanf("%d",&a);
  rev=0;
 d=a;
 while(a!=0)
 {
   r=a%10;
   rev=rev*10=r;
   a=a/10;
 }
  if(d==rev)
  {
    printf("palindrome");
    }
    else
    {
      printf("not");
    }
}

