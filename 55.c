/*����Ȼ��n���������k, k>n��

***������ʾ��Ϣ**��"Input n:"
***�������ݸ�ʽ**��"%d"
***������ݸ�ʽ**��"%d"

ʾ��
���룺
257
�����
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














