/*���򣺼��㱾��͸���֮�͡�
��д�����ӡ��һ�������������ʾ���ڼ���ʱ����100����Ͷ���ڲ�ͬ�����ϵļ�ֵ��
�û����������ʺ�ҪͶ�ʵ�����������������Ϣһ��һ�Σ������ʾ��һ����ڴ����������º���ĸ�����������Ͷ�ʵļ�ֵ��
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter interest rate:" "Enter number of year:"
**�����ʽҪ��"\nyears" "%6d%%" "%3d   " "%7.2f"
�����ǳ�������ʱ�������	
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











