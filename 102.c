/*�ж�5*5�׻÷�����
�÷�������ָ�þ�����ÿһ�С�ÿһ�С�ÿһ�Խ����ϵ�Ԫ��֮�Ͷ�����ȵġ�
�Ӽ�������һ��5��5�ľ��󲢽������һ����ά���������У��������Ƿ�Ϊ�÷�����
�����䰴ָ����ʽ��ʾ����Ļ�ϡ�
�����ʽ: "%d"
�����ʽ��
����ǻ÷����������ʾ��Ϣ: "It is a magic square!\n"�����������Ԫ�أ�
�����ʽΪ�� "%4d"������ʹ��"\n"��
������ǻ÷����������ʾ��Ϣ: "It is not a magic square!\n" �����������Ԫ�أ�
   


��������ʾ��1��
17 24 1  8  15
23 5  7  14 16
4  6  13 20 22
10 12 19 21 3
11 18 25 2  9
It is a magic square!�L
  17  24   1   8  15�L
  23   5   7  14  16�L
   4   6  13  20  22�L
  10  12  19  21   3�L
  11  18  25   2   9�L
�L

��������ʾ��2��
17 24 1 8 15
23 5 7 14 16
4 6 11 20 22
10 12 19 21 3
11 18 25 2 9
It is not a magic square!*/

#include<stdio.h>

int main()
{
	int a[5][5],i,j,hang=0,lei=0,dui=0,z=0,flag=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0,j=0;j<5;j++)
	{
	    z=z+a[i][j];
	}
	
	for(i=1;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			hang=hang+a[i][j];	
		}
		if(hang==z)
		{
			hang=0;
		}
		else if(hang!=z)
		{
			flag=-1;
		}
	}
	
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			lei=lei+a[i][j];
		}
		if(lei==z)
		{
			lei=0;
		}
		else if(lei!=z)
		{
			flag=-1;
		}
	} 
	
	for(i=0;i<5;i++)
	{
		dui=dui+a[i][i];
	}
	if(dui!=z)
	{
		flag=-1;
	}
	
	if(flag==1)
	{
		printf("It is a magic square!\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%4d",a[i][j]);
			}
			printf("\n");
		}
	}
	else if(flag==-1)
	{
		printf("It is not a magic square!\n");
	}
}

















