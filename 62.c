/*输入某班学生某门课的成绩（最多不超过40人），当输入为负值时，表示输入结束，
用函数编程统计成绩高于平均分的学生人数。
要求按如下原型编写统计成绩在全班平均分及平均分之上的学生人数
int GetAboveAver(int score[], int n);
**输入要求："%d" 
**输出要求：
"Total students are %d\n"
"Average score is %d\n"
"Students of above average is %d\n"
程序运行示例：
78 45 89 43 45 -1
Total students are 5
Average score is 60
Students of above average is 2*/

#include<stdio.h>
#define N 40

int GetAboveAver(int score[], int n);
int PJS(int score[],int n);

int aver;

int main()
{
	int score[N],n,x;
	n=-1;
	do
	{
		n++;
		scanf("%d",&score[n]);
	}while(score[n]>=0);
	printf("Total students are %d\n",n);
	x=PJS(score,n);
	printf("Average score is %d\n",x);
	printf("Students of above average is %d\n",GetAboveAver(score,n));
}

int PJS(int score[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+score[i];
	}
	aver=sum/n;
	return aver;
}

int GetAboveAver(int score[], int n)
{
	int count=0,i;
	for(i=0;i<n;i++)
	{
		if(score[i]>aver)
		{
			count++;
		}
	}
	return count;
}

























