//�κ�һ����Ȼ��m����������д��m����������֮�͡����磺 
//��1^3=1 
//��2^3=3+5 
//��3^3=7+9+11 
//��4^3=13+15+17+19 
//���ʵ�֣�����һ��Ȼ��n�������n3��n������������
//**�����ʽҪ��"%d" ��ʾ��Ϣ��"\nInput an integer here please:\n"
//**�����ʽҪ��"%d*%d*%d=%d+%d+...." 
//��������ʾ�����£�
//
//Input an integer here please:
//5
//5*5*5=21+23+25+27+29

#include<stdio.h>
int main()
{
	int m,i,y;
	printf("\nInput an integer here please:\n");
	scanf("%d",&m);
	y=m*m*m;
	for(i=1;;i=i+2)
	{
		sum1=i;
		sum2=i+2;
		sum3=i+4;
		sum4=i+6;
		sum5=i+8;
		if(m==1&&sum1==y)
		{
			printf("%d*%d*%d=%d";m,m,m,sum1);
			break;
		}
		if(m==2&&sum1+sum2==y)
		{
			printf("%d*%d*%d=%d+%d",m,m,m,sum1,sum2);
			break;
		}
		if(m==3&&sum1+sum2+sum3==y)
		{
			printf("%d*%d*%d=%d+%d",m,m,m,sum1,sum2,sum3);
			break;
		}
		if(m==4&&)
	}
}


