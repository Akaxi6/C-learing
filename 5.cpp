/*ʹ��const��������Բ����pi��ȡֵΪ3.14159������̴Ӽ�������Բ�İ뾶r�����㲢���Բ���ܳ����������������ݱ�����λС���㡣
**�����ʽҪ��"%lf" ��ʾ��Ϣ��"Input r:"
**�����ʽҪ��"printf WITHOUT width or precision specifications:\n"
 "circumference = %f, area = %f\n" "printf WITH width and precision specifications:\n" "circumference = %7.2f, area = %7.2f\n"
��������ʾ�����£�
Input r:5.3
printf WITHOUT width or precision specifications:
circumference = 33.300854, area = 88.247263
printf WITH width and precision specifications:
circumference =   33.30, area =   88.25*/

#include<stdio.h>
int main(void)
{
	const double pi=3.14159;
	double r;
	printf("Input r:");
	scanf("%lf",&r);
	printf("printf WITHOUT width or precision specifications:\n");
	printf("circumference = %f, area = %f\n",2*pi*r,pi*r*r);
	printf("printf WITH width and precision specifications:\n");
	printf("circumference = %7.2f, area = %7.2f\n",2*pi*r,pi*r*r);
	return 0;
}
