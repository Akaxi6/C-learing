/*������׳˺���Fact()����̼��㲢���1! + 2! + ��+ n!��ֵ��
**�����ʽҪ��"%u"  ��ʾ��Ϣ��"Input n(n>0):"
**�����ʽҪ��"sum = %lu\n"
��������ʾ����
Input n(n>0):5
sum = 153*/

#include<stdio.h>
long Fact(int n);
int main()
{
	int a;
	long sum;
	printf("Input n(n>0):");
	scanf("%u",&a);
	sum=Fact(a);
	printf("sum = %lu\n",sum);
}

long Fact(int n)
{
	int i;
	long k=1,z=0;
	for(i=1;i<=n;i++)
	{
		k=k*i;
		z=z+k;
	}
	return z;
}






