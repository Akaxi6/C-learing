/*ʹ��˫��֧��������̣����㲢����������������ֵ��
**�����ʽҪ��"%d,%d" ��ʾ��Ϣ��"Input a, b:"
**�����ʽҪ��"max = %d\n"
��������ʾ�����£�
Input a, b:3,5
max = 5*/

#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Input a, b:");
	scanf("%d %d",&a,&b);
	sum=a>b?a:b;
	printf("max = %d\n",sum);
	return 0;
}
