/*��д�������µ�һ������a������ת90�ȣ������µ�����b������ӡ������
a =
 1 2
 3 4
 5 6
 7 8
��ת��
b = 
 7 5 3 1
 8 6 4 2
**�����ʾ��Ϣ��"Array a:\n"   "Array b:\n"
**�����ʽҪ��"%4d"
��������ʾ�����£�
Array a:
   1   2
   3   4
   5   6
   7   8
Array b:
   7   5   3   1
   8   6   4   2*/
   
#include<stdio.h>

int main()
{
	int a[4][2],b[2][4],i,j,n=0;
	printf("Array a:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j]=++n;
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<2;i++)
	{   
		for(j=0;j<4;j++)
		{
			b[i][j]=a[3-j][i];
		}
	}
	
	printf("Array b:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
}

















