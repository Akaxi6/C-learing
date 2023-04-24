
















# include<stdio.h>
int main()
{
	int a,b,c,flag=0;
	char ch;
	scanf("%d",&a);
	while((ch=getchar())!='=')
	{
		scanf("%d",&b);
		if((ch=='/')&&(b==0))
		{
			flag=1;break;
		}
		switch(ch)
		{
			case '+': a=a+b;break;
			case '-':a=a-b;break;
			case '*':a=a*b;break;
			case '/':a=a/b;break;
			default :
			flag=1;break;
		}
		if(flag) break;
	}
		if(flag)
		{
			printf("´íÎóµÄÔËËã·û£º%c",b);
		}
	     else
	     {
	     	printf("%d",a);
		 }
	return 0;
}
