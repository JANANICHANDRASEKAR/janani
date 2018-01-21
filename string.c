#include <stdio.h>
#include <string.h>
void main()
{
 char c;
  printf("Enter the character: ");
  scanf("%c",&c);
  if (isdigit(c) == 0)
  {
  printf("%c is not numeric.",c);
  }
  else
  {
  printf("%c is numeric",c);
}
}
