/*下面程序用于输入三角形的三条边a,b,c，判断它们能否构成三角形，若能则指出是何种三角形：
等边三角形、等腰三角形、直角三角形、等腰直角三角形，一般三角形。允许的浮点数计算误差在0.1范围内。
注意：请将修改正确后的完整源程序拷贝粘贴到答题区内。
对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
改错时不能改变程序原有的意图，不能改变函数原型。
**输入输出格式要求：不要改变以下代码的输入输出格式。*/

#include <stdio.h>
#include <math.h>
#define EPS 1e-1
int main(void)
{
    float   a, b, c;
    int    flag=1;           
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)              
    {
        if (fabs(a-b)<=EPS&&fabs(b-c)<=EPS&&fabs(c-a)<=EPS)
        {
            printf("等边");
            flag = 0;
        }
        else if (fabs(a-b)<=EPS||fabs(b-c)<=EPS||fabs(c-a)<=EPS)
        {
            printf("等腰");
            flag =0;
        }
        else if(fabs(a*a+b*b-c*c)<=EPS||fabs(a*a+c*c-b*b)<=EPS||fabs(c*c+b*b-a*a)<=EPS)
        {
            printf("直角");
            flag = 0;
        }
        else if (!flag)
        {
            printf("一般");
        }
        printf("三角形\n");
    }
    else
    {
        printf("不是三角形\n");
    }
}

