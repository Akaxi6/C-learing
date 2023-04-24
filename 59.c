/*从键盘任意输入10个整数存入一个数组中，
然后任意输入一个整数x，采用顺序查找法，在数组中查找该数，
如果找到，则函数返回该数在数组中的下标位置，
并在主函数中打印该值；
如果没有找到，则返回-1，并在主函数中打印“Not found!”。
要求按如下函数原型编程实现查找功能。
int Search(int a[], int n, int x);
在主函数中调用函数Search顺序查找x，
然后在主函数中打印查找结果。
要求必须按照题目要求和用函数编程，否则不给分。
**要求输入10个整数的提示信息格式为：
"Input 10 numbers:\n"（每输入一个数，键一次回车）；
**要求输入整数x的提示信息格式为：
"Input x:\n"
**要求输出格式为:
找到时的打印格式为"Subscript of x is %d\n"
没找到时的打印格式为"Not found!\n"
程序运行示例：
Input 10 numbers:
5↙
6↙
4↙
3↙
8↙
9↙
11↙
4↙
25↙
7↙
Input x:
9↙
Subscript of x is 5*/

#include<stdio.h>
#define N 10

int Search(int a[], int n, int x);
void main()
{
    int a[N],i,m,x,n;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)  //输入值 
    {
        scanf("%d",&a[i]);
    } 
    
    printf("Input x:\n");
    scanf("%d",&x);
    m=Search(a,n,x);
    if(m==-1)
        printf("Not found!");
    else
        printf("Subscript of x is %d\n",m);
}

int Search(int a[], int n, int x)//寻找值 
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]==x)
        {
		return i;
	    }
    }
    return -1;
}



















