/*从键盘任意输入一个字符串，计算其实际字符个数并打印输出，
即不使用字符串处理函数strlen()编程实现strlen()的功能。
**输入格式要求：gets()
**提示信息："Please enter a string:"
**输出格式要求："The length of the string is: %u\n"
程序的运行示例如下：
Please enter a string:Hello China
The length of the string is: 11*/

#include<stdio.h>
#define N 50
int main()
{
	char a[N];
	int i=0;
	printf("Please enter a string:");
	do
	{
		i++;
		scanf("%c",&a[i]);
	}while(a[i]=='\n');
	printf("The length of the string is: %u\n",i);
}
