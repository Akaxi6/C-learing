/*�����й�ʽ��pi�Ľ���ֵ��ֱ�����һ��ľ���ֵС��1e-4Ϊֹ��
��4=1?13+15?17+��
**���룺��
**�����ʽҪ��"pi=%10.6lf\n"*/

#include<stdio.h>
#include<math.h>
int main()
{
	double x,y=1,sum=0,pi;
	for(x=3;(1.0/x)<1e-4;x=x+2)
	{
		y=-1.0/x;
		sum=sum+y;
	}
	pi=4*sum;
	printf("pi=%10.6lf\n",pi);
	return 0;
}
