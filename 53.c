/*用递归方法编程计算输出Fibonacci数列，同时打印出计算Fibonacci数列每一项时所需的递归调用次数。
**输入格式要求："%d" 提示信息："Input n:"
**输出格式要求："Fib(%d)=%d, count=%d\n"
程序运行示例如下：
Input n:10
Fib(1)=1, count=1
Fib(2)=1, count=3
Fib(3)=2, count=5
Fib(4)=3, count=9
Fib(5)=5, count=15
Fib(6)=8, count=25
Fib(7)=13, count=41
Fib(8)=21, count=67
Fib(9)=34, count=109
Fib(10)=55, count=177*/

#include<stdio.h>
int Fib(int a);
int count;

int main()
{
	int n,i,x;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	count=0;
    	x=Fib(i);
    	printf("Fib(%d)=%d, count=%d\n",i,x,count);
	}
}

int Fib(int a)
{
	count++;
	if(a==1)
	{
		return 1;
	}
	if(a==0)
	{
		return 0;
	}
	else
	{
		return (Fib(a-1)+Fib(a-2));
	}
}



