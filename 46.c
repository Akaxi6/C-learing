/*�󲻳���1000�Ļ���������
**�����ʽҪ����ʾ��Ϣ��"Following are palindrome primes not greater than 1000:\n"
**�����ʽҪ��"%d\t"
��������ʾ�����£�
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









