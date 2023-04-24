/*编写程序将如下的一个数组a向右旋转90度，构成新的数组b，并打印出来。
a =
 1 2
 3 4
 5 6
 7 8
旋转后
b = 
 7 5 3 1
 8 6 4 2
**输出提示信息："Array a:\n"   "Array b:\n"
**输出格式要求："%4d"
程序运行示例如下：
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

















