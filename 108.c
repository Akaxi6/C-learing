#include<stdio.h>
void fun(char *a,char *b)
{
	(*a)++;
	b=a;
}

main()
{
	char c1='A',c2='a';
	fun(&c1,&c2);
	printf("%c,%c",c1,c2);
}
