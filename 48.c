/*设计一个函数MaxCommonFactor()，利用欧几里德算法（也称辗转相除法）计算两个正整数的最大公约数。
假设有两个整数m和n，通过连续运用求余运算，直到余数为0为止，最后非0的余数就是最大公约数。
请改正程序中的错误，使它能得出正确的结果。*/

#include <stdio.h>

int MaxCommonFactor(int a, int b);

main()
{
    int a, b, x;

    scanf("%d,%d", &a,& b);

    x = MaxCommonFactor(a, b);
    if (x < 0)
        printf("Input Error!\n");
    else
    printf("%d\n", x);
}

int MaxCommonFactor(int a, int b)
{
    int r;
    if (a <= 0 || b <= 0)
        return -1;
    do
    {
        r = a % b;
        a = b;
        b = r;
    }
    while (r != 0);
        return  a;
}

