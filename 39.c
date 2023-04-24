/*捕鱼和分鱼。ABCDE五人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪，于是各自找地方睡觉。
日上三竿，A第一个醒来，将鱼分为5份，把多余的1条鱼扔掉，拿走自己的1份。
B第二个本来，也将鱼分5份，把多余的1条鱼扔掉，拿走自己的1份。
CDE依次醒来，也按同样的方法拿鱼。问他们合伙至少捕了多少条鱼？
**输出格式要求："Total number of fish catched=%d\n"

程序运行示例：
Total number of fish catched=*****/

#include<stdio.h>
int main()
{
	int x,y,z,k,q;
	for(x=2;x>0&&x<=9999;x++)
	{
		y=4*((x-1)/5);
		z=4*((y-1)/5);
		k=4*((z-1)/5);
		q=4*((k-1)/5);
		if(x%5==1&&y%5==1&&z%5==1&&k%5==1&&q%5==1)
		{
			printf("Total number of fish catched=%d\n",x);
			break;
		}
	}
}
