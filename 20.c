/*��̼���ֶΣ�
     y= x               x<1
     y= 2x-1            1<=x<10
     y= 3x-11           x>=10
�Ӽ�������һ��������ʵ��x����ӡ��yֵ��
**������ʾ��Ϣ��ʽҪ��Ϊ��"Please input x:"��
**�����ʽҪ��Ϊ"y = %.2f\n"��
��������ʾ��1��
Please input x:26
y = 67.00
��������ʾ��2��
Please input x:3
y = 5.00
��������ʾ��3��
Please input x:-5
y = -5.00*/

#include<stdio.h>
main()
{
	float x,y;
	printf("Please input x:");
	scanf("%f",&x);
	if(x<1)
	{
		y=x;
	}
	else if(1<=x&&x<=10)
	{
		y=2*x-1;
	}
	else
	{
		y=3*x-11;
	}
	printf("y = %.2f\n",y);
}
