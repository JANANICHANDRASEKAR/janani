#include<stdio.h>
int main()
{
int i,n;
char st[10],st1[10];
scanf("%s",&st);
scanf("%s",&st1);
i=0;
while((st[i]==st1[i] && st[i]!='\0'))
i++;
if(st[i]<st1[i])
printf("%s",st1);
else if(st[i]>st1[i])
printf("%s",st);
else
printf("%s",st);
return 0;
}
