/*�Ӽ���Ϊ3*3�ľ����������ݣ��ҳ����Խ���������Ԫ�أ��Լ����ڵ��кš�
**�����ʽҪ��"%d"
**�����ʽҪ��"max=%d ,row=%d"
���������ʾ�����£�
1 2 3
4 5 6
7 8 9
max=9 ,row=2*/

#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,max=0,row;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
    for(n=0;n<3;n++)
    {
    	if(a[n][n]>max)//(||a[n][2-n]>max)
    	{
    		max=a[n][n];
    		row=n;
		}
	}
	
	printf("max=%d ,row=%d",max,row);
}
