/*С������12�꣬��ĸ�ױ�����24�ꡣ��дһ���������С����ĸ���ڼ�����С���������һ������ʱ�������˵�������Ƕ��٣�
**�����ʽҪ��"year=%d\n" "mingAge=%d\n" "motherAge=%d\n"*/

#include<stdio.h>
int main()
{
	int x=12, y=36, z;
    for (z = 1; z <= 100; z++)
    {
        if ((y+z) == 2 * (x+z))
        {
            y+=z;
            x+=z;
            printf("year=%d\n", z);
            printf("mingAge=%d\n" "motherAge=%d\n", x, y);
        }
    }
}
