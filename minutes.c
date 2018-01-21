#include <stdio.h>
int main ()
{
int n=103;
if ( (n / 60) == 1 ) 
printf("%d hour",n/60);
else
printf("%d hours",n/60);

if ( (n % 60) == 1) 
printf(" %d minute",n%60);
else 
printf(" %d minutes",n%60);

return 0;
}
