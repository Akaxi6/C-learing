/*����ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ���������Ϊ��ֵʱ����ʾ���������
�ú������ͳ�Ƴɼ�����ƽ���ֵ�ѧ��������
Ҫ������ԭ�ͱ�дͳ�Ƴɼ���ȫ��ƽ���ּ�ƽ����֮�ϵ�ѧ������
int GetAboveAver(int score[], int n);
**����Ҫ��"%d" 
**���Ҫ��
"Total students are %d\n"
"Average score is %d\n"
"Students of above average is %d\n"
��������ʾ����
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

























