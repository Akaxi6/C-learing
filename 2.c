/*�Ӽ�����������a��b��c��ֵ����̼��㲢���һԪ���η���ax2+bx+c=0�ĸ�����С���������������һԪ���η��̵������ʽ����
p=?b2a,q=b2?4ac��2a
����a��b��c��ֵ�ܱ�֤��������������ȵ�ʵ������b2-4ac>0��
**������ʾ��Ϣ��"Please enter the coefficients a,b,c:"
**�����ʽҪ��"%f,%f,%f" 
**�����ʽҪ��
"x1=%7.4f, x2=%7.4f\n"
��������ʾ����
Please enter the coefficients a,b,c:1,4,2
x1=-3.4142, x2=-0.5858*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float a,b,c,d;
printf("Please enter the coefficients a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
d=(b*b-4*a*c);
if (d>=0)
printf("x1=%7.4f, x2=%7.4f\n",((-b+sqrt(d))/(2*a)),((-b-sqrt(d))/(2*a)));
return 0;
}

