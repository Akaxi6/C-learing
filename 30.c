/*ֱ�������ε���������a^2+b^2=c^2,������߶������������a��b��cΪһ�鹴������
������ÿ�߳���������20�����й�������
**������ʾ��Ϣ��ʽ: ��
**�������ݸ�ʽҪ��: ��
**������ݸ�ʽҪ��: "a=%d\tb=%d\tc=%d\n"

��������ʾ����
a=***  b=*** c=***
a=*** b=** c=**
......
��һ��6��⣩*/

#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=20;a++)
	{
		for(b=a+1;b<=20;b++)
		{
			for(c=1;c<=20;c++)
			{
				if(a*a+b*b-c*c==0)
				{
					printf("a=%d\tb=%d\tc=%d\n",a,b,c);
				}
			}
		}
	}
}
