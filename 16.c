/*�Ӽ���������ĳ������£���������������·��ж����죬��ʲô���ڣ�����涨3~5��Ϊ������6~8��Ϊ�ļ���9~11��Ϊ�＾��1��2��12��Ϊ������
Ҫ������ܹ����û�����Ƿ��ַ����߷Ƿ�����ݺ��·�ʱ���������ʾ��Ϣ��"Input error!\n"�������������ִ�С�
Ҫ����������������֪������������֮һ�ľ������꣺
��1���ܱ�4���������ܱ�100������
��2���ܱ�400������
**�����ʽҪ��"%d, %d"  ��ʾ��Ϣ��"Input year,month:"
**��������ĸ�ʽҪ��"%d days\n"
**������ڵĸ�ʽҪ��"The season is spring\n"��"The season is summer\n"��"The season is autumn\n"��"The season is winter\n"
��������˷Ƿ��ַ��������С��1�����·ݲ��ںϷ��������ڣ������"Input error!\n"�������������ִ�С�
��������ʾ�����£�
Input year,month:2012,2�L
29 days
The season is winter*/

#include<stdio.h>
int main()
{
	int year,m,d,n;
	printf("Input year,month:");
	n=scanf("%d, %d",&year,&m);
	if(n>=1&&year>=1&&1<=m&&m<=12)
	{
		if(3<=m&&m<=5)
		{
			if(m==3||m==5)
			{
				d=31;
				printf("%d days\n",d);
			}
			else
			{
				d=30;
				printf("%d days\n",d);
			}
			printf("The season is spring\n");
		}
		else if(6<=m&&m<=8)
		{
			if(m==7||m==8)
			{
				d=31;
				printf("%d days\n",d);
			}
			else
			{
				d=30;
				printf("%d days\n",d);
			}
			printf("The season is summer\n");
		}
		else if(9<=m&&m<=11)
		{
			if(m==10)
			{
				d==31;
				printf("%d days\n",d);
			}
			else
			{
				d==30;
				printf("%d days\n",d);
			}
			printf("The season is autumn\n");
		}
		else if(m==2)
		{
			if(year%4==0&&year%100!=0||year%400==0)
			{
				d=29;
				printf("%d days\n",d);
				printf("The season is winter\n");
			}
			else
			{
				d=28;
				printf("%d days\n",d);
				printf("The season is winter\n");
			}
		}
	}
	else
	{
		printf("Input error!\n");
	}
	return 0;
}

