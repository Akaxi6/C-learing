/*�����������fibonacci���е�ǰ10��������1, 1, 2, 3, 5, ����������ÿ�д�ӡ5�����ĸ�ʽ�����
**�����ʽҪ��"%6d"*/

#include<stdio.h>
int fei(int n);

int main()
{
	int shu[11],i;
	for(i=1;i<11;i++)
	{
		if(i==6)
		printf("\n");
		shu[i]=fei(i);
		printf("%6d",shu[i]);
	}
}

int fei(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else if(n>=3)
	{
		return fei(n-1)+fei(n-2);
	}
	else
	{
		return -1;
	}
}


















