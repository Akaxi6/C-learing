/*�Ӽ�����������һ��������������ж�������ż�ԡ�Ҫ�������������Ϊint���������û��Ӽ������롣

���������ʾ��1��
Input an integer number:
4�L
4 is an even number

���������ʾ��2��
Input an integer number:
3�L
3 is an odd number

�����ʽ:
"%d"

�����ʽ��
������Ϣ��ʾ��"Input an integer number:\n"
ż�������ʽ��"%d is an even number\n"
���������ʽ��"%d is an odd number\n"*/

#include<stdio.h>
int main(void)
{
	int a;
	printf("Input an integer number:\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is an even number\n",a);
	}
	else
	{
		printf("%d is an odd number\n",a);
	}
	return 0;
}
