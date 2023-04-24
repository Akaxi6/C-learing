/*编程计算分段：
     y= x               x<1
     y= 2x-1            1<=x<10
     y= 3x-11           x>=10
从键盘输入一个单精度实数x，打印出y值。
**输入提示信息格式要求为："Please input x:"；
**输出格式要求为"y = %.2f\n"。
程序运行示例1：
Please input x:26
y = 67.00
程序运行示例2：
Please input x:3
y = 5.00
程序运行示例3：
Please input x:-5
y = -5.00*/

#include<stdio.h>
main()
{
	float x,y;
	printf("Please input x:");
	scanf("%f",&x);
	if(x<1)
	{
		y=x;
	}
	else if(1<=x&&x<=10)
	{
		y=2*x-1;
	}
	else
	{
		y=3*x-11;
	}
	printf("y = %.2f\n",y);
}
