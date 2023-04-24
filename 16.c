/*从键盘输入你的出生年月，编程输出你出生的月份有多少天，是什么季节，假设规定3~5月为春季，6~8月为夏季，9~11月为秋季，1、2和12月为冬季。
要求程序能够在用户输入非法字符或者非法的年份和月份时输出错误提示信息："Input error!\n"，并结束程序的执行。
要求考虑闰年的情况，已知满足如下条件之一的就是闰年：
（1）能被4整除但不能被100整除；
（2）能被400整除。
**输入格式要求："%d, %d"  提示信息："Input year,month:"
**输出天数的格式要求："%d days\n"
**输出季节的格式要求："The season is spring\n"，"The season is summer\n"，"The season is autumn\n"，"The season is winter\n"
如果输入了非法字符或者年份小于1或者月份不在合法的区间内，则输出"Input error!\n"，并结束程序的执行。
程序运行示例如下：
Input year,month:2012,2↙
29 days
The season is winter*/

#include<stdio.h>
int main()
{
	int year,m,d,n;
	printf("Input year,month:");
	n=scanf("%d, %d",&year,&m);
	if(n>=1&&year>=1&&1<=m&&m<=12)
	{
		if(3<=m&&m<=5)
		{
			if(m==3||m==5)
			{
				d=31;
				printf("%d days\n",d);
			}
			else
			{
				d=30;
				printf("%d days\n",d);
			}
			printf("The season is spring\n");
		}
		else if(6<=m&&m<=8)
		{
			if(m==7||m==8)
			{
				d=31;
				printf("%d days\n",d);
			}
			else
			{
				d=30;
				printf("%d days\n",d);
			}
			printf("The season is summer\n");
		}
		else if(9<=m&&m<=11)
		{
			if(m==10)
			{
				d==31;
				printf("%d days\n",d);
			}
			else
			{
				d==30;
				printf("%d days\n",d);
			}
			printf("The season is autumn\n");
		}
		else if(m==2)
		{
			if(year%4==0&&year%100!=0||year%400==0)
			{
				d=29;
				printf("%d days\n",d);
				printf("The season is winter\n");
			}
			else
			{
				d=28;
				printf("%d days\n",d);
				printf("The season is winter\n");
			}
		}
	}
	else
	{
		printf("Input error!\n");
	}
	return 0;
}

