/*����һ����������Ҫ�����෴��˳������������õݹ鷽��ʵ�֡�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter number:"
**�����ʽҪ��"%d"
��������ʾ�����£�
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
