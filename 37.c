/*数值151是一个回文素数。因为151既是一个素数也是一个回文数（回文数是从前向后读和从后向前读都一样的数）。
写一个程序找出所有在[a,b]区间内的回文素数(5 <= a < b <= 1000,000,000)。

输入
第一行："%d %d"

输出
符合条件的回文素数，一个数一行。

程序运行示例：
5 500
5
7
11
101
131
151
181
191
313
353
373
383*/

#include<stdio.h>
int main(void)
{
	int a,b,i,y,flag,bai,shi,ge,count;
	scanf("%d %d",&a,&b);
	for(y=a;y>=a&&y<=b;y++)
	{
		flag=1;
		count=0;
		for(i=2;i<=y-1&&flag;i++)
		{
			if(y%i==0)
			{
				flag=0;
				break;
			}
		}
		if(y>=1&&y<=9)
		{
			count=1;
		}
		if(y>=10&&y<=99)
		{
			shi=y/10;
			ge=y%10;
			if(shi==ge)
			{
				count=1;
			}
		}
		if(y>=100&&y<=999)
		{
			bai=y/100;
			ge=y%10;
			if(bai==ge)
			{
				count=1;
			}
		}
		if(flag&&count)
		{
			printf("%d\n",y);
		}
	}
}











