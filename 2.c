/*从键盘任意输入a，b，c的值，编程计算并输出一元二次方程ax2+bx+c=0的根（较小的先输出）。根据一元二次方程的求根公式，令
p=?b2a,q=b2?4ac√2a
假设a，b，c的值能保证方程有两个不相等的实根（即b2-4ac>0）
**输入提示信息："Please enter the coefficients a,b,c:"
**输入格式要求："%f,%f,%f" 
**输出格式要求：
"x1=%7.4f, x2=%7.4f\n"
程序运行示例：
Please enter the coefficients a,b,c:1,4,2
x1=-3.4142, x2=-0.5858*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float a,b,c,d;
printf("Please enter the coefficients a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
d=(b*b-4*a*c);
if (d>=0)
printf("x1=%7.4f, x2=%7.4f\n",((-b+sqrt(d))/(2*a)),((-b-sqrt(d))/(2*a)));
return 0;
}

