/*����ж����������������Ժ���ż�ԡ�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Input m:"
**�����ʽҪ��
����Ǹ�ż���������"%d is a negative even\n" 
����Ǹ������������"%d is a negative odd\n"
�������ż���������"%d is a positive even\n"
������������������"%d is a positive odd\n"
�����0�������"%d is zero. It is an even\n"
��������ʾ��1��
Input m:6�L
6 is a positive even
��������ʾ��2��
Input m:0�L
0 is zero. It is an even*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c;
	printf("Input m:");
	scanf("%d",&a);
	b=fabs(a);
	c=b%2;
	if(a>0&&c==0)
	{
		printf("%d is a positive even\n",a);
	}
	else if(a>0&&c!=0)
	{
		printf("%d is a positive odd\n",a);
	}
	else if(a<0&&c==0)
	{
		printf("%d is a negative even\n",a);
	}
	else if(a<0&&c!=0)
	{
		printf("%d is a negative odd\n",a);
	}
	else
	{
		printf("%d is zero. It is an even\n",a);
	}
	return 0;
}



