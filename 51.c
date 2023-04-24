/*用递归方法编程计算Fibonacci数列的前N项。
当n=1或2时，fib(n)=1
当n>2时，fib(n)=fib(n-1)+fib(n-2)。
**输入格式要求："%d" 提示信息："Input n:"
**输出格式要求："Fib(%d)=%d\n"
程序运行示例如下：
Input n:10
Fib(1)=1
Fib(2)=1
Fib(3)=2
Fib(4)=3
Fib(5)=5
Fib(6)=8
Fib(7)=13
Fib(8)=21
Fib(9)=34
Fib(10)=55*/

#include<stdio.h>
int fib( int n );

int main()
{
	int n,i;
	printf("Input n:");
	scanf("%d",&n);
	for( i=1;i<=n;i++ )
	{
		printf("Fib(%d)=%d\n",i,fib(i));
	}
}

int fib( int n )
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}








