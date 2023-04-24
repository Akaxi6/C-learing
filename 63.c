/*任意从键盘输入10个整数，用函数编程实现计算其中的最大值。
 要求用数组作为函数参数编程实现计算最大值的函数FindMax()，
即按照如下函数原型编写该函数：
int FindMax(int num[], int n);
要求：1）在主函数中打印输出函数求得的最大值，
         必须用函数编程，否则不给分。
      2）**输入格式要求：无任何信息提示，
          每输入一个数，键一次回车，
         格式要求为"%d"
      3）**输出格式要求："max=%d\n" 

程序运行结果示例：
3↙
2↙
4↙
8↙
13↙
6↙
7↙
9↙
8↙
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

























