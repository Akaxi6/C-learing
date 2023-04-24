#include<stdio.h>
 
main()
{
    int  m;
    int  i;
    int  sum;
    for (i=1; ;i++)
    {
            sum = sum + i*i*i;
            if (sum >= 1000000)
            break;
    }
    m = sum;
    printf("m = %d\n",m);
}
