/*选择排序法。用选择排序法将N（N为5）个数从小到大排序后输出。
**输入格式要求："%d" 提示信息："Enter No.%2d:"
**输出格式要求："%d"
程序运行示例如下：
Enter No. 1:5
Enter No. 2:7
Enter No. 3:3
Enter No. 4:9
Enter No. 5:8
35789*/

#include<stdio.h>
#define N 5

int main()
{
	int a[N],i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter No.%2d:",i+1);
		scanf("%d",a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		t=i;
		for(j=i+1;j<n;j++)
		{
			if(a[t]>a[j])
			{
				t=j;
			}
		}
		if(t!=i)
		{
			temp=a[t];
			a[t]=a[i];
			a[i]=temp;
		}
	}
	for(i=0;i<5;i++)
	{
		printf()
	}
}




    












