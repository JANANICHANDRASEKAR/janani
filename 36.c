#include<stdio.h>
int main()
{
 int i,count=0;
 char a[20]="Narniya part 2.watched 2 times";
 for(i=0;a[i]!=0;i++)
 {
  if(a[i]>='0'||a[i]<='9')
  {
  count++;
  }
  }
  printf("the count is %d",count);
  return 0;
  }
  
