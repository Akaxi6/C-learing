/*��̼���100���ں�6��������Ȼ�������磺16��26��60�ȣ��ĵ���֮�͡�
Ҫ��
(1)��������������Ϊfloat
(2)
**�����ʽ����������ʾ��Ϣ����������
**�����ʽ: "The result is %.2f\n"

��������ʾ����
The result is *****/

#include<stdio.h>
int main()
{
	int i,x;
	float sum=0;
	for(i=6;i<=100;i=i+10)
	{
		sum=sum+1.0/i;
	}
	for(x=60;x<=69;x++)
	{
		sum=sum+1.0/x;
	}
	sum=sum-1.0/66;
	printf("The result is %.2f\n",sum);
}

