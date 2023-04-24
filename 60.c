/*从键盘输入某班学生某门课的成绩（每班人数最多不超过40人），
当输入为负值时，表示输入结束，试编程计算最高分（编写自定义函数实现）。
**输入格式要求："%d" 提示信息："Total students are %d\n"
 "The highest score is %d\n" "Input score:" 
**输出格式要求："%d"
程序的运行示例如下：
Input score:80
Input score:100 
Input score:90
Input score:60
Input score:-1
Total students are 4
The highest score is 100*/

#include<stdio.h>
#define N 40

int max(int score[],int n);

int main()
{
	int score[N],n;
	n=-1;
	do
	{
		n++;
		printf("Input score:");
		scanf("%d",&score[n]);
	}while(score[n]>=0);
	printf("Total students are %d\n",n);
	printf("The highest score is %d\n",max(score,n));
}

int max(int score[],int n)
{
	int i,z;
	for(i=0;i<n;i++)
	{
		if(score[i]>z)
		{
			z=score[i];
		}
	}
	return z;
}






















