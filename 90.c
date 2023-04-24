/*利用数组计算fibonacci数列的前10个数，即1, 1, 2, 3, 5, ……，并按每行打印5个数的格式输出。
**输出格式要求："%6d"*/

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


















