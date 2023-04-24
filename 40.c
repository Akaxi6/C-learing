/*编程计算100以内含6的所有自然数（例如：16，26，60等）的倒数之和。
要求：
(1)计算结果数据类型为float
(2)
**输入格式：无输入提示信息和输入数据
**输出格式: "The result is %.2f\n"

程序运行示例：
The result is *****/

#include<stdio.h>
int main()
{
	int i,x;
	float sum=0;
	for(i=6;i<=100;i=i+10)
	{
		sum=sum+1.0/i;
	}
	for(x=60;x<=69;x++)
	{
		sum=sum+1.0/x;
	}
	sum=sum-1.0/66;
	printf("The result is %.2f\n",sum);
}

