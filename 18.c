/*��д����ʵ�����º�����
������ʾ��Ϣ��"input x:\n" �����ʽ��"%f" �����ʽ��"y=%.3f" ��������ʾ��1�� 
input x: 0�L y=6.000 ��������ʾ��2�� input x: 21�L y=39.000*/

#include<stdio.h>
int main()
{
	float x,y;
	printf("input x:\n");
	scanf("%f",&x);
	if(x>=-7&&x<=10)
	{
		y=5*x*x-4*x+6;
	}
	else
	{
		y=(1.0/3)*x+32;
	}
	printf("y=%.3f",y);
	return 0;
}

