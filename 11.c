
#include <stdio.h>
 
main()
{
    double b;
    long a = 65535;
    int c, d;
    char f, g;
 
    b = (1234.0 - 1) / 10;
    scanf("%d %d %c", &c, &d, &f);
    scanf(" %c", &g);
    printf("%d,%d,%c,", c, d , f);
    printf("%c,%lf,%ld", g, b, a);
}

