/*编程打印200~300之间所有素数。
要求判断一个数是否是素数用函数实现，打印结果请在主函数实现。
判断一个数是否是素数函数原型为:
      int fun(int m);
参数说明：
      参  数：m是要进行判断的数；
      返回值：若此数是素数返回值为1；否则返回值为0
****输入提示信息格式: 无
****输入数据格式要求: 无
****输出数据格式要求: "%d\n" 
注：不能使用指针、结构体、共用体、文件、goto、枚举类型进行编程，主函数不能使用int main和return 0。*/


#include<stdio.h>
int fun(int m);
int main()
{
	int i;
	for(i=200;i<=300;i++)
	{
		if(fun(i)==1)
		{
			printf("%d\n",i);
		}
	}
}

int fun(int m)
{
	int x,flag=1;
	for(x=2;x<=m-1&&flag;x++)
	{
		if(m%x==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		return 1;
	}
	return 0;
}




