/*��500���ڵ�10�������������Ͳ��ֱ������
���������ʾ�����£�
   499   491   487   479   467   463   461   457   449   443
 sum=4696
 ***������ݸ�ʽ***��"%6d"
                   "\n sum=%d\n"*/

#include<stdio.h>
int main()
{
	int i,x,sum=0,count=0,flag;
	for(x=499;x>=0;x=x-1)
	{
		flag=1;
	    for(i=2;i<=x-1&&flag&&count<=10;i++)
	    {
		    if(x%i==0)
		    {
		    	flag=0;
		    	break;
			}
			if(flag)
			{
				sum=sum+x;
		    	printf("%6d",x);
		    	count++;
			}
	    }
    }
    printf("\n sum=%d\n",sum);
}




