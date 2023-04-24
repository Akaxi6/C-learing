/*使用双分支条件语句编程，计算并输出两个整数的最大值。
**输入格式要求："%d,%d" 提示信息："Input a, b:"
**输出格式要求："max = %d\n"
程序运行示例如下：
Input a, b:3,5
max = 5*/

#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Input a, b:");
	scanf("%d %d",&a,&b);
	sum=a>b?a:b;
	printf("max = %d\n",sum);
	return 0;
}
