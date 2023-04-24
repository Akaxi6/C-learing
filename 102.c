/*判断5*5阶幻方矩阵
幻方矩阵是指该矩阵中每一行、每一列、每一对角线上的元素之和都是相等的。
从键盘输入一个5×5的矩阵并将其存入一个二维整型数组中，检验其是否为幻方矩阵，
并将其按指定格式显示到屏幕上。
输入格式: "%d"
输出格式：
如果是幻方矩阵，输出提示信息: "It is a magic square!\n"，并输出矩阵元素，
输出格式为： "%4d"（换行使用"\n"）
如果不是幻方矩阵，输出提示信息: "It is not a magic square!\n" （不输出矩阵元素）
   


程序运行示例1：
17 24 1  8  15
23 5  7  14 16
4  6  13 20 22
10 12 19 21 3
11 18 25 2  9
It is a magic square!↙
  17  24   1   8  15↙
  23   5   7  14  16↙
   4   6  13  20  22↙
  10  12  19  21   3↙
  11  18  25   2   9↙
↙

程序运行示例2：
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

















