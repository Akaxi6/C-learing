����ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ���
������Ϊ��ֵʱ����ʾ���������
�ú������ͳ�Ƴɼ�������ƽ���ֵ�ѧ��������
Ҫ��
(1)�����º���ԭ�ͽ��б�̣�
int GetAboveAver(int score[], int n);
(2)���������У�
 ����ѧ���ɼ���
 Ȼ����ú���GetAboveAver����ɼ�������ƽ���ֵ�ѧ��������
 ��������������
Ҫ��:
(1)ѧ���ɼ���ƽ���־�����Ϊint����
(2)**��������ʾ��Ϣ
**�����ʽΪ��"%d"
**�����ʽΪ��"Students of above average is %d\n"

��������ʾ����
88 75 86 67 59 66 -1�L
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















