/*求不超过1000的回文素数。
**输入格式要求：提示信息："Following are palindrome primes not greater than 1000:\n"
**输出格式要求："%d\t"
程序运行示例如下：
Following are palindrome primes not greater than 1000:
11	101	***	151	181	191	***	353	373	383	727	757	787	797	919	929*/

#include<stdio.h>
int HWSS(int x);

int main()
{
	int x,h,flag,i;
	printf("Following are palindrome primes not greater than 1000:\n");
	for(x=1;x<=1000;x++)
	{
		flag=1;
		for(i=2;i<=x-1&&flag;i++)
		{
			if(x%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			h=HWSS(x);
		    if(HWSS(x))
		    {
			printf("%d\t",h);
		    }
		}
		
	}
}
int HWSS(int x)
{
	int ge,shi,bai;
	if(x>=1&&x<=9)
	{
		return 0;
	}
	else if(x>=10&&x<=99)
	{
		shi=x/10;
		ge=x%10;
		if(shi==ge)
		{
			return x;
		}
		else
		{
			return 0;
		}
	}
	else 
	{
		bai=x/100;
		ge=x%10;
		if(bai==ge)
		{
			return x;
		}
		else
		{
			return 0;
		}
	}
}









