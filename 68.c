/*�Ӽ�����������һ���ַ�����������ʵ���ַ���������ӡ�����
����ʹ���ַ���������strlen()���ʵ��strlen()�Ĺ��ܡ�
**�����ʽҪ��gets()
**��ʾ��Ϣ��"Please enter a string:"
**�����ʽҪ��"The length of the string is: %u\n"
���������ʾ�����£�
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
