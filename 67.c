输入某班学生某门课的成绩（最多不超过40人），
当输入为负值时，表示输入结束，
用函数编程统计成绩不低于平均分的学生人数。
要求：
(1)按如下函数原型进行编程：
int GetAboveAver(int score[], int n);
(2)在主函数中：
 输入学生成绩，
 然后调用函数GetAboveAver计算成绩不低于平均分的学生人数，
 最后输出该人数。
要求:
(1)学生成绩和平均分均定义为int类型
(2)**无输入提示信息
**输入格式为："%d"
**输出格式为："Students of above average is %d\n"

程序运行示例：
88 75 86 67 59 66 -1↙
Students of above average is 3

#include<stdio.h>
#define N 40
int GetAboveAver(int score[], int n);

int main()
{
	int score[N],i;
	for(i=0;i<40;i++)
	{
	scanf("%d",&score[i]);
    }
    int sum=0,aver;
    for(i=0;i<40;i++)
    {
    	sum=sum+score[i]; 
	}
	aver=sum/n;
}















