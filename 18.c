/*编写程序实现如下函数：
输入提示信息："input x:\n" 输入格式："%f" 输出格式："y=%.3f" 程序运行示例1： 
input x: 0↙ y=6.000 程序运行示例2： input x: 21↙ y=39.000*/

#include<stdio.h>
int main()
{
	float x,y;
	printf("input x:\n");
	scanf("%f",&x);
	if(x>=-7&&x<=10)
	{
		y=5*x*x-4*x+6;
	}
	else
	{
		y=(1.0/3)*x+32;
	}
	printf("y=%.3f",y);
	return 0;
}

