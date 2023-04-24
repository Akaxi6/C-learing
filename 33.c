#include<stdio.h>
int main()
{
	int m,i,flag=1;
	printf("Input m:");
	scanf("%d",&m);
	if(m<=1)
	{
		return 0;
	}
	for(i=2;i<=m-1&&flag;i++)
	{
		if(m%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("素数");
	}
	else
	{
		printf("不是素数");
	}
}
