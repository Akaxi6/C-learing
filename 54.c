/*输入一个正整数，要求以相反的顺序输出该数。用递归方法实现。
**输入格式要求："%d" 提示信息："Enter number:"
**输出格式要求："%d"
程序运行示例如下：
Enter number:35567899
99876553*/

#include<stdio.h>
void XF(int n);

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
    XF(n);
}

void XF(int n)
{
	if(n>0)
	{
        printf("%d",n%10);
        XF(n/10); 		
	}
}
