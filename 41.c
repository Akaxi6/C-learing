/*输出如下图所示的下三角形乘法九九表。
1	2	3	4	5	6	7	8	9
------------------------------------------------------------------
1
2	4
3	6	9
4	8	12	16
…
9	18	27	36	45	54	63	72	81
****第一行输出格式："%4d"
****第二行输出格式："\n-----------------------------\n"  
****后面数据输出格式:"%4d"(需要循环，注意末尾有回车）*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		printf("%4d",i);
	}
	printf("\n-----------------------------\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}
}
