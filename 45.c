/*函数fun功能：由大到小输出两实数。请改正程序中的错误，使它能得出正确的结果。*/
#include <stdio.h>


fun()
{
    float t;
    float a, b; 
    scanf("%f%f", &a, &b);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    printf("%5.2f,%5.2f\n", a, b);
}

main()
{
    fun();
}






