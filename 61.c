/*���庯��ReverseOrder��һά���鷴�����С�
������������10��������Ȼ����ú���ReverseOrder����������������Ľ����
������ʾ��"input 10 numbers:"
�����ʽ��"%d"
�����ʽ��"%5d"

�������н��ʾ����
input 10 numbers: 5 8 7 6 5 4 2 8 0 9
   9    0    8    2    4    5    6    7    8    5

��ʾ���������п��Բ��ö�Ӧλ�����ݽ����ķ���������һ�������һ���������ڶ����͵����ڶ���������һ������n��2��*/

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























