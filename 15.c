/*��������������������ε�������a,b,c���ж������ܷ񹹳������Σ�������ָ���Ǻ��������Σ�
�ȱ������Ρ����������Ρ�ֱ�������Ρ�����ֱ�������Σ�һ�������Ρ�����ĸ��������������0.1��Χ�ڡ�
ע�⣺�뽫�޸���ȷ�������Դ���򿽱�ճ�����������ڡ�
����û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
���ҽ�������ȫ���������ҳ������н��������ȷ���Ÿ���5�֡�
�Ĵ�ʱ���ܸı����ԭ�е���ͼ�����ܸı亯��ԭ�͡�
**���������ʽҪ�󣺲�Ҫ�ı����´�������������ʽ��*/

#include <stdio.h>
#include <math.h>
#define EPS 1e-1
int main(void)
{
    float   a, b, c;
    int    flag=1;           
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)              
    {
        if (fabs(a-b)<=EPS&&fabs(b-c)<=EPS&&fabs(c-a)<=EPS)
        {
            printf("�ȱ�");
            flag = 0;
        }
        else if (fabs(a-b)<=EPS||fabs(b-c)<=EPS||fabs(c-a)<=EPS)
        {
            printf("����");
            flag =0;
        }
        else if(fabs(a*a+b*b-c*c)<=EPS||fabs(a*a+c*c-b*b)<=EPS||fabs(c*c+b*b-a*a)<=EPS)
        {
            printf("ֱ��");
            flag = 0;
        }
        else if (!flag)
        {
            printf("һ��");
        }
        printf("������\n");
    }
    else
    {
        printf("����������\n");
    }
}

