/*�Ӽ�����������һ����ţ��ж����Ƿ������ꡣ��֪������������֮һ�������꣺��1���ܱ�4�����������ܱ�100��������2���ܱ�400������
������ʾ��Ϣ��"Input a year:"
�����ʽ��"%d"
�����ʾ��Ϣ�͸�ʽ��
"%d is a leap year!\n"
"%d is not a leap year!\n"
��������ʾ��1��
Input a year:1888�L
1888 is a leap year!
��������ʾ��2��
Input a year:1995�L
1995 is not a leap year!*/

#include<stdio.h>
int main()
{
	int a;
	printf("Input a year:");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400==0)
	{
		printf("%d is a leap year!\n",a);
	}
	else
	{
		printf("%d is not a leap year!\n",a);
	}
	return 0;
}
