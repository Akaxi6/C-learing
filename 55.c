/*求自然数n最近的素数k, k>n。

***输入提示信息**："Input n:"
***输入数据格式**："%d"
***输出数据格式**："%d"

示例
输入：
257
输出：
Please input n:263*/

#include<stdio.h>
int main()
{
	int n,k,flag,i,zhaodao;
	scanf("%d",&n);
	for(k=n+1;zhaodao=1;k++)
	{
		flag=1;
		for(i=2;i<=k-1;i++)
		{
			if(k%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			zhaodao=0;
			printf("Please input n:%d",k);
			break;
		}
	}
}














