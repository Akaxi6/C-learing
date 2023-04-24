#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter a date(year month day):\n");
	scanf("%d%d%d",&y,&m,&d);
	printf("You entered the date: %02d/%02d/%d",d,m,y);
	return 0;
}

