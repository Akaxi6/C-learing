/*一维数组实验题：计算平均数、中位数和众数
在调查数据分析（Survey data analysis）中经常需要计算平均数、中位数和众数。
用函数编程计算40个输入数据（是取值1—10之间的任意整数）的平均数（Mean）、中位数（Median）
和众数（Mode）。中位数指的是排列在数组中间的数。众数是数组中出现次数最多的那个数
（不考虑两个或两个以上的输入数据出现次数相同的情况）。
提示：计算中位数时，首先要调用排序函数对数组按升序进行排序，
然后取出排序后数组中间位置的元素answer[n/2] ，就得到了中位数。如果数组元素的个数是偶数，
那么中位数就等于数组中间那两个元素的算术平均值。众数就是40个输入数据中出现次数最多的那个数。
计算众数时，首先要统计不同取值的输入数据出现的次数，然后找出出现次数最多的那个数据，
这个数据就是众数（这里没有考虑两个或者两个以上的输入数据出现次数相同的情况）。

程序运行结果示例：
Input the feedbacks of 40 students:
10 9 10 8 7 6 5 10 9 8↙
8 9 7 6 10 9 8 8 7 7↙
6 6 8 8 9 9 10 8 7 7↙
9 8 7 9 7 6 5 9 8 7↙
Mean value=7
Median value=8
Mode value=8

输入格式:  "%d"
输出格式：
输入数据的提示信息："Input the feedbacks of 40 students:\n"
平均数输出："Mean value=%d\n"
中位数输出："Median value=%d\n"
众数输出： "Mode value=%d\n"*/
   
   
#include<stdio.h>
#define N 40 

int main()
{
	int a[N],i,j,temp,sum=0,aver,x;
	printf("Input the feedbacks of 40 students:\n");
	for(i=0;i<40;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<40;i++)
	{
		sum=sum+a[i];
	}
	aver=sum/40;
	printf("Mean value=%d\n",aver);
	
	for(i=0;i<39;i++)
	{
		for(j=i+1;j<40;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	x=(a[19]+a[20])/2;
	printf("Median value=%d\n",x);
	
	int number,max=0,c;
	for(i=0;i<39;i++)
	{
		number=1;
		for(j=i+1;j<40;j++)
		{
			if(a[j]==a[i])
			{
				number++;
			}
		}
		if(max<number)
		{
			max=number;
			c=a[i];
		}
	}
	printf("Mode value=%d\n",c); 
}


/*#include<stdio.h> 计算众数 
int number,max=0,c;
	for(i=0;i<39;i++)
	{
		number=1;
		for(j=i+1;j<40;j++)
		{
			if(a[j]==a[i])
			{
				number++;
			}
		}
		if(max<number)
		{
			max=number;
			c=a[i];
		}
	}
	printf("Mode value=%d\n",c); 
}


*/











