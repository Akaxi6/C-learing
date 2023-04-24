/*同构数
编写程序，找出1~99之间的全部同构数。若一个数出现在它的平方数的右边则称它是同构数。
例如：若5^2=25，则5是一个同构数。再如，若25^2=625，则25是一个同构数。

输入格式: 无
输出格式： "m=%3d\t\tm*m=%6d\n"*/

#include<stdio.h>
int TGS(int n);
int main()
{
	int i;
	for(i=1;i<100;i++)
	{
		printf("m=%3d\t\tm*m=%6d\n",TGS(i),TGS(i));
	}
}
int TGS(int n)
{
	if(n*n%10==n||n*n%100==n)
	{
		return n;
	}
}
