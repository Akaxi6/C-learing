/*����Ӽ�������10���������ú������ʵ�ּ������е����ֵ��
 Ҫ����������Ϊ�����������ʵ�ּ������ֵ�ĺ���FindMax()��
���������º���ԭ�ͱ�д�ú�����
int FindMax(int num[], int n);
Ҫ��1�����������д�ӡ���������õ����ֵ��
         �����ú�����̣����򲻸��֡�
      2��**�����ʽҪ�����κ���Ϣ��ʾ��
          ÿ����һ��������һ�λس���
         ��ʽҪ��Ϊ"%d"
      3��**�����ʽҪ��"max=%d\n" 

�������н��ʾ����
3�L
2�L
4�L
8�L
13�L
6�L
7�L
9�L
8�L
-10
max=13*/

#include<stdio.h>
#define N 10

int FindMax(int num[], int n);

int main()
{
	int num[N],n=10,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("max=%d\n",FindMax(num,n));
}

int FindMax(int num[], int n)
{
	int z=0,i;
	for(i=0;i<n;i++)
	{
		if(num[i]>z)
		{
			z=num[i];
		}
	}
	return z;
}

























