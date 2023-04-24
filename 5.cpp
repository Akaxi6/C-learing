/*使用const常量定义圆周率pi（取值为3.14159），编程从键盘输入圆的半径r，计算并输出圆的周长和面积。输出的数据保留两位小数点。
**输入格式要求："%lf" 提示信息："Input r:"
**输出格式要求："printf WITHOUT width or precision specifications:\n"
 "circumference = %f, area = %f\n" "printf WITH width and precision specifications:\n" "circumference = %7.2f, area = %7.2f\n"
程序运行示例如下：
Input r:5.3
printf WITHOUT width or precision specifications:
circumference = 33.300854, area = 88.247263
printf WITH width and precision specifications:
circumference =   33.30, area =   88.25*/

#include<stdio.h>
int main(void)
{
	const double pi=3.14159;
	double r;
	printf("Input r:");
	scanf("%lf",&r);
	printf("printf WITHOUT width or precision specifications:\n");
	printf("circumference = %f, area = %f\n",2*pi*r,pi*r*r);
	printf("printf WITH width and precision specifications:\n");
	printf("circumference = %7.2f, area = %7.2f\n",2*pi*r,pi*r*r);
	return 0;
}
