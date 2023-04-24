/*用递归方法计算整数n的阶乘n！。
**输入格式要求："%d" 提示信息："Input n:" "n<0, data error!\n"
**输出格式要求："%d! = %ld\n"
程序运行示例如下：
Input n:5
5! = 120*/

#include<stdio.h>
int JC(int n);

int main()
{
	int x;
	printf("Input n:");
	scanf("%d",&x);
	if(x<0)
	{
		printf("n<0, data error!\n");
	}
	else
	{
		printf("%d! = %ld\n",x,JC(x));
	}
}

int JC(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return (n*JC(n-1));
	}
}



























