/*��n����Χ��һȦ��˳���źš��ӵ�һ�˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ�
��������µ���ԭ���ڼ��ŵ���λ��
���������ʾ�����£�
������������30
30������������µ��ǵ�29�š�

������ʾ��"������������"
�����ʽ��"%d"
�����ʾ�� "%d������������µ��ǵ�%d�š�"*/

#include<stdio.h>
#define N 100

int main()
{
	int peopleNum[N];//���� 
	int totalNum=0; //������ 
	int restNum=0; //ʣ������ 
	int count=0;  //������ 
	int i;
	
	printf("������������");
	scanf("%d",&totalNum);
	for(i=0;i<totalNum;i++)
	{
		peopleNum[i]=i+1; //������������ 
	}
	
	restNum=totalNum;//һ��ʼʣ�����ȫ���� 
	
	while(restNum>1)//������־��ʣ��һ���ˣ�������������
	{
		int *curNum=peopleNum;//ָ�����ָ����е�һ��
		
		while(curNum<peopleNum+totalNum)//������Ϊ�����˸���Ϊ 0�����޳� 
		{
			if(*curNum!=0) //�����в�Ϊ 0 ����
			{
				count++;
				if(count==3)
				{
					*curNum=0; //����Ϊ����ֵΪ�� 
					count=0;  //���������� 
					restNum--;//ʣ��������һ 
				}
			} 
			curNum++;
		} 
	} 
	
	for(i=0;i<totalNum;i++)
	{
		if(peopleNum[i]!=0) //���û���������� 
		{
			printf("%d������������µ��ǵ�%d�š�",totalNum,peopleNum[i]);
			break;
		}
	}
}





















