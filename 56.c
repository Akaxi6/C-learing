/*程序：计算本金和复利之和。
编写程序打印出一个表格，这个表格显示了在几年时间内100美金投资在不同利率上的价值。
用户将输入利率和要投资的年数。假设整合利息一年一次，表格将显示出一年间在此输入利率下后边四个更高利率下投资的价值。
**输入格式要求："%d" 提示信息："Enter interest rate:" "Enter number of year:"
**输出格式要求："\nyears" "%6d%%" "%3d   " "%7.2f"
下面是程序运行时的情况：	
Enter intereset rate: 6
Enter number of years: 5

      years	         6%	7%	8%	9%	10%
	1		106.00	107.00	108.00	109.00	110.00
	2		112.36	114.49	116.64	118.81	121.00
	3		119.10	122.50	125.97	129.50	133.10
	4		126.25	131.08	136.05	141.16	146.41
	5		133.82	140.26	146.93	153.86	161.05*/
	
#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,k,n;
	float qian,p;
	printf("Enter interest rate:");
	scanf("%d",&n);
	printf("Enter number of year:");
	scanf("%d",&m);
	printf("\nyears");
	for(k=n;k<=n+4;k++)
	{
		printf("%6d%%",k);
	}
	printf("\n");
    for(i=1;i<=m;i++)
	{
		printf("%3d   ",i);
		for(k=n;k<=n+4;k++)
		{
			p=1+k*0.01;
			qian=100*pow(p,i);
			printf("%7.2f",qian);
		}
		printf("\n");
	}
}











