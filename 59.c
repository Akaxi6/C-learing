/*�Ӽ�����������10����������һ�������У�
Ȼ����������һ������x������˳����ҷ����������в��Ҹ�����
����ҵ����������ظ����������е��±�λ�ã�
�����������д�ӡ��ֵ��
���û���ҵ����򷵻�-1�������������д�ӡ��Not found!����
Ҫ�����º���ԭ�ͱ��ʵ�ֲ��ҹ��ܡ�
int Search(int a[], int n, int x);
���������е��ú���Search˳�����x��
Ȼ�����������д�ӡ���ҽ����
Ҫ����밴����ĿҪ����ú�����̣����򲻸��֡�
**Ҫ������10����������ʾ��Ϣ��ʽΪ��
"Input 10 numbers:\n"��ÿ����һ��������һ�λس�����
**Ҫ����������x����ʾ��Ϣ��ʽΪ��
"Input x:\n"
**Ҫ�������ʽΪ:
�ҵ�ʱ�Ĵ�ӡ��ʽΪ"Subscript of x is %d\n"
û�ҵ�ʱ�Ĵ�ӡ��ʽΪ"Not found!\n"
��������ʾ����
Input 10 numbers:
5�L
6�L
4�L
3�L
8�L
9�L
11�L
4�L
25�L
7�L
Input x:
9�L
Subscript of x is 5*/

#include<stdio.h>
#define N 10

int Search(int a[], int n, int x);
void main()
{
    int a[N],i,m,x,n;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)  //����ֵ 
    {
        scanf("%d",&a[i]);
    } 
    
    printf("Input x:\n");
    scanf("%d",&x);
    m=Search(a,n,x);
    if(m==-1)
        printf("Not found!");
    else
        printf("Subscript of x is %d\n",m);
}

int Search(int a[], int n, int x)//Ѱ��ֵ 
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]==x)
        {
		return i;
	    }
    }
    return -1;
}



















