/*��5�� ʵ��2�������жϡ�
ҽ�����߾��㷺�ĵ����ͳ�Ʒ���������������������ظ��������°�����ָ�������������жϵķ�������ָ�����㹫ʽ�ǣ�
      t = w /(h*h) 
���У�t����ָ����w�����أ��䵥λΪǧ�ˣ�h����ߣ��䵥λΪ�ס����ݸ�������ָ��t���㹫ʽ�����ж�����������ں������ͣ�
     �� t<18 ʱ��Ϊ�����أ�
 �� 18��t<25 ʱ��Ϊ�������أ�
 �� 25��t<27 ʱ��Ϊ�������أ� 
    �� t��27 ʱ��Ϊ���֡�

****������ʾ��Ϣ��ʽ��"Please enter h,w:\n"
****�������ݸ�ʽҪ��"%f,%f"���ȶ�����ߣ��ٶ������أ�������׶��룬������ǧ�˶��룩
****������ݸ�ʽҪ��:
      �� t<18 ʱ�������"Lower weight!\n"       
  �� 18��t<25 ʱ�������"Standard weight!\n"
  �� 25��t<27 ʱ�������"Higher weight!\n"
    �� t��27 ʱ�� �����"Too fat!\n"

��������ʾ����
Please enter h,w:
1.64,45�L
Lower weight!*/

#include<stdio.h>
int main()
{
	float w,h,t;
	printf("Please enter h,w:\n");
	scanf("%f,%f",&h,&w);
	t=w/(h*h);
	if(t<18)
	{
		printf("Lower weight!\n");
	}
	else if(18<=t&&t<=25)
	{
		printf("Standard weight!\n");
	}
	else if(25<=t&&t<=27)
	{
		printf("Higher weight!\n");
	}
	else
	{
		printf("Too fat!\n");
	}
	return 0;
}
