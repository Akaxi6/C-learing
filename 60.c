/*�Ӽ�������ĳ��ѧ��ĳ�ſεĳɼ���ÿ��������಻����40�ˣ���
������Ϊ��ֵʱ����ʾ����������Ա�̼�����߷֣���д�Զ��庯��ʵ�֣���
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Total students are %d\n"
 "The highest score is %d\n" "Input score:" 
**�����ʽҪ��"%d"
���������ʾ�����£�
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






















