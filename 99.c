/*写一个程序读入你的姓名，然后每个字母间加一个空格后输出。例如，姓名John显示为J o h n。

**输入格式要求："%s"  提示信息："请输入你的姓名："

程序运行示例：
请输入你的姓名：zyh
z y h*/

#include<stdio.h>

int main()
{
	char name[100];
	char *p=name;
	
	printf("请输入你的姓名：");
	scanf("%s",name);
	
	while(*p!='\0')
	{
		putchar(*p);
		putchar(' ');
		p++;
	}
}
