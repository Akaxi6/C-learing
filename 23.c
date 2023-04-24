/*从键盘任意输入一个年号，判断它是否是闰年。已知符合下列条件之一者是闰年：（1）能被4整除，但不能被100整除；（2）能被400整除。
输入提示信息："Input a year:"
输入格式："%d"
输出提示信息和格式：
"%d is a leap year!\n"
"%d is not a leap year!\n"
程序运行示例1：
Input a year:1888↙
1888 is a leap year!
程序运行示例2：
Input a year:1995↙
1995 is not a leap year!*/

#include<stdio.h>
int main()
{
	int a;
	printf("Input a year:");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400==0)
	{
		printf("%d is a leap year!\n",a);
	}
	else
	{
		printf("%d is not a leap year!\n",a);
	}
	return 0;
}
