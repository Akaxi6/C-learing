/*ѡ�����򷨡���ѡ�����򷨽�N��NΪ5��������С��������������
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter No.%2d:"
**�����ʽҪ��"%d"
��������ʾ�����£�
Enter No. 1:5
Enter No. 2:7
Enter No. 3:3
Enter No. 4:9
Enter No. 5:8
35789*/

#include<stdio.h>
#define N 5

int main()
{
	int a[N],i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter No.%2d:",i+1);
		scanf("%d",a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		t=i;
		for(j=i+1;j<n;j++)
		{
			if(a[t]>a[j])
			{
				t=j;
			}
		}
		if(t!=i)
		{
			temp=a[t];
			a[t]=a[i];
			a[i]=temp;
		}
	}
	for(i=0;i<5;i++)
	{
		printf()
	}
}




    












