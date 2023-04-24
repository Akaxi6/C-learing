/*从键盘为3*3的矩阵输入数据，找出主对角线上最大的元素，以及所在的行号。
**输入格式要求："%d"
**输出格式要求："max=%d ,row=%d"
程序的运行示例如下：
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
