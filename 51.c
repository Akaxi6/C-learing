/*�õݹ鷽����̼���Fibonacci���е�ǰN�
��n=1��2ʱ��fib(n)=1
��n>2ʱ��fib(n)=fib(n-1)+fib(n-2)��
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Input n:"
**�����ʽҪ��"Fib(%d)=%d\n"
��������ʾ�����£�
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








