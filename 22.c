/*编程计算1*2*3 + 3*4*5 + ... + 99*100*101的值

输入要求：无输入
输出要求："sum=%d"
程序运行示例：
sum=*****/

#include<stdio.h>
int main()
{
	int i=1,a=1,b=2,c=3,sum=0;
	while(i<=99)
	{
		sum=sum+(a*b*c);
		i=i+2;
		a=a+2;
		b=b+2;
		c=c+2;
	}
	printf("sum=%d",sum);
}
