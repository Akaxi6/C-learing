/*�ú�����̼��������������ֵ�����������е��øú������㲢����Ӽ�����������������������ֵ��
**�����ʽҪ��"%d,%d"  ��ʾ��Ϣ��"Input a,b:"
**�����ʽҪ��"max = %d\n"
��������ʾ�����£�
Input a,b:5,8
max = 8*/

#include<stdio.h>
int MAX(int n,int m);
int main()
{
	int a,b,max;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	max=MAX(a,b);
	printf("max = %d\n",max);
	return 0;
}
int MAX(int n,int m)
{
	int d;
	d=n>m?n:m;
	return d;
}
