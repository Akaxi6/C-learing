/*дһ������������������Ȼ��ÿ����ĸ���һ���ո����������磬����John��ʾΪJ o h n��

**�����ʽҪ��"%s"  ��ʾ��Ϣ��"���������������"

��������ʾ����
���������������zyh
z y h*/

#include<stdio.h>

int main()
{
	char name[100];
	char *p=name;
	
	printf("���������������");
	scanf("%s",name);
	
	while(*p!='\0')
	{
		putchar(*p);
		putchar(' ');
		p++;
	}
}
