/*�õݹ鷽����������n�Ľ׳�n����
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Input n:" "n<0, data error!\n"
**�����ʽҪ��"%d! = %ld\n"
��������ʾ�����£�
Input n:5
5! = 120*/

#include<stdio.h>
int JC(int n);

int main()
{
	int x;
	printf("Input n:");
	scanf("%d",&x);
	if(x<0)
	{
		printf("n<0, data error!\n");
	}
	else
	{
		printf("%d! = %ld\n",x,JC(x));
	}
}

int JC(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return (n*JC(n-1));
	}
}



























