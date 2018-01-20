#include <stdio.h>

void main()
{
    int low, high, i, temp1, temp2, r, n = 0, result = 0;

    
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;

       
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

        
        while (temp2 != 0)
        {
            r = temp2 % 10;
            result += pow(r, n);
            temp2 /= 10;
        }

       
        if (result == i) 
        {
            printf("%d ", i);
        }

        
        n = 0;
        

    }
    
}


