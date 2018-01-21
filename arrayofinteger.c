include<stdio.h>
int main()
{
int a[100], m, c, l= 1;
 
  printf("Enter the number of elements in a\n");
  scanf("%d", &s);
 
  printf("Enter %d integers\n", s);
{
  for (c = 0; c < s; c++)
    scanf("%d", &a[c]);
 
  m = a[0];
 
  for (c = 1; c < s; c++)
  {
    if (a[c] > m)
    {
       m= a[c];
       l = c+1;
    }
  }
 }
  printf("Maximum element is present at location %d and it's value is %d.\n", l, m);

}
