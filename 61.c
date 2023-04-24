/*定义函数ReverseOrder将一维数组反向排列。
主函数中输入10个整数，然后调用函数ReverseOrder将其逆序并输出逆序后的结果。
输入提示："input 10 numbers:"
输入格式："%d"
输出格式："%5d"

程序运行结果示例：
input 10 numbers: 5 8 7 6 5 4 2 8 0 9
   9    0    8    2    4    5    6    7    8    5

提示：反向排列可以采用对应位置数据交换的方法，即第一个和最后一个交换，第二个和倒数第二个交换。一共交换n／2次*/

#include<stdio.h>
#define N 10

void ReverseOrder(int score[],int n);

int main()
{
	int score[N],n=10,i;
	printf("input 10 numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	ReverseOrder(score,n);
	for(i=0;i<n;i++)
	{
	printf("%5d",score[i]);
    }
}

void ReverseOrder(int score[],int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=score[i];
		score[i]=score[n-1-i];
		score[n-1-i]=temp;
	}
}























