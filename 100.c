/*有n个人围成一圈，顺序排号。从第一人开始报数（从1到3报数），凡报到3的人退出圈子，
问最后留下的是原来第几号的那位。
程序的运行示例如下：
请输入人数：30
30个人中最后留下的是第29号。

输入提示："请输入人数："
输入格式："%d"
输出提示： "%d个人中最后留下的是第%d号。"*/

#include<stdio.h>
#define N 100

int main()
{
	int peopleNum[N];//队列 
	int totalNum=0; //总人数 
	int restNum=0; //剩余人数 
	int count=0;  //计数器 
	int i;
	
	printf("请输入人数：");
	scanf("%d",&totalNum);
	for(i=0;i<totalNum;i++)
	{
		peopleNum[i]=i+1; //总人数赋予编号 
	}
	
	restNum=totalNum;//一开始剩余的人全都在 
	
	while(restNum>1)//结束标志，剩余一个人，接下来在踢人
	{
		int *curNum=peopleNum;//指针变量指向队列第一人
		
		while(curNum<peopleNum+totalNum)//将报数为三的人赋予为 0，并剔除 
		{
			if(*curNum!=0) //队列中不为 0 的人
			{
				count++;
				if(count==3)
				{
					*curNum=0; //报数为三赋值为零 
					count=0;  //计数器归零 
					restNum--;//剩余人数减一 
				}
			} 
			curNum++;
		} 
	} 
	
	for(i=0;i<totalNum;i++)
	{
		if(peopleNum[i]!=0) //最后没被标记零的人 
		{
			printf("%d个人中最后留下的是第%d号。",totalNum,peopleNum[i]);
			break;
		}
	}
}





















