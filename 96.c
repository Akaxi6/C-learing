/*�Ĵ��⣺�û��Ӽ�����������һ�����ֱ�ʾ�·�ֵn��������ʾ���·ݶ�Ӧ��Ӣ�ı�ʾ��
��n����1��12֮�䣬�������Illegal month����
ע�⣺
��1���뽫�޸���ȷ�������Դ���򿽱�ճ�����������ڡ�
��2������û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
��3�����ҽ�������ȫ���������ҳ������н��������ȷ���Ÿ���5�֡�   */
#include <stdio.h>
main()
{
    int n;
    char monthName[][20] = {"Illegal month", "January", "February", "March",
	 "April", "May", "June", "July", "August", "September", "October", "November",
	 "December"};
 
    printf("Input month number:");
    scanf("%d", &n);
    if ((n <= 12) && (n >= 1))
    {
        printf("month %d is %s\n", n, monthName[n]);
 
    }
    else
    {
        printf("%s\n", monthName[0]);
    }
}
