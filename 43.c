/*利用求阶乘函数Fact()，编程计算并输出1! + 2! + …+ n!的值。
**输入格式要求："%u"  提示信息："Input n(n>0):"
**输出格式要求："sum = %lu\n"
程序运行示例：
Input n(n>0):5
sum = 153*/

#include<stdio.h>
long Fact(int n);
int main()
{
	int a;
	long sum;
	printf("Input n(n>0):");
	scanf("%u",&a);
	sum=Fact(a);
	printf("sum = %lu\n",sum);
}

long Fact(int n)
{
	int i;
	long k=1,z=0;
	for(i=1;i<=n;i++)
	{
		k=k*i;
		z=z+k;
	}
	return z;
}






