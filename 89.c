/*һά����ʵ���⣺����ƽ��������λ��������
�ڵ������ݷ�����Survey data analysis���о�����Ҫ����ƽ��������λ����������
�ú�����̼���40���������ݣ���ȡֵ1��10֮���������������ƽ������Mean������λ����Median��
��������Mode������λ��ָ���������������м�����������������г��ִ��������Ǹ���
���������������������ϵ��������ݳ��ִ�����ͬ���������
��ʾ��������λ��ʱ������Ҫ���������������鰴�����������
Ȼ��ȡ������������м�λ�õ�Ԫ��answer[n/2] ���͵õ�����λ�����������Ԫ�صĸ�����ż����
��ô��λ���͵��������м�������Ԫ�ص�����ƽ��ֵ����������40�����������г��ִ��������Ǹ�����
��������ʱ������Ҫͳ�Ʋ�ͬȡֵ���������ݳ��ֵĴ�����Ȼ���ҳ����ִ��������Ǹ����ݣ�
������ݾ�������������û�п������������������ϵ��������ݳ��ִ�����ͬ���������

�������н��ʾ����
Input the feedbacks of 40 students:
10 9 10 8 7 6 5 10 9 8�L
8 9 7 6 10 9 8 8 7 7�L
6 6 8 8 9 9 10 8 7 7�L
9 8 7 9 7 6 5 9 8 7�L
Mean value=7
Median value=8
Mode value=8

�����ʽ:  "%d"
�����ʽ��
�������ݵ���ʾ��Ϣ��"Input the feedbacks of 40 students:\n"
ƽ���������"Mean value=%d\n"
��λ�������"Median value=%d\n"
��������� "Mode value=%d\n"*/
   
   
#include<stdio.h>
#define N 40 

int main()
{
	int a[N],i,j,temp,sum=0,aver,x;
	printf("Input the feedbacks of 40 students:\n");
	for(i=0;i<40;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<40;i++)
	{
		sum=sum+a[i];
	}
	aver=sum/40;
	printf("Mean value=%d\n",aver);
	
	for(i=0;i<39;i++)
	{
		for(j=i+1;j<40;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	x=(a[19]+a[20])/2;
	printf("Median value=%d\n",x);
	
	int number,max=0,c;
	for(i=0;i<39;i++)
	{
		number=1;
		for(j=i+1;j<40;j++)
		{
			if(a[j]==a[i])
			{
				number++;
			}
		}
		if(max<number)
		{
			max=number;
			c=a[i];
		}
	}
	printf("Mode value=%d\n",c); 
}


/*#include<stdio.h> �������� 
int number,max=0,c;
	for(i=0;i<39;i++)
	{
		number=1;
		for(j=i+1;j<40;j++)
		{
			if(a[j]==a[i])
			{
				number++;
			}
		}
		if(max<number)
		{
			max=number;
			c=a[i];
		}
	}
	printf("Mode value=%d\n",c); 
}


*/











