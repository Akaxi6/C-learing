/*���������������ľ���ֵ��
**�����ʽҪ��"%d" ��ʾ��Ϣ��"input the value of x:"
**�����ʽҪ��"|x|=%d\n"
��������ʾ�����£�
input the value of x:68
|x|=68*/

#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	printf("input the value of x:");
	scanf("%d",&x);
	x=fabs(x);
	printf("|x|=%d\n",x);
	return 0;
}
