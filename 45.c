/*����fun���ܣ��ɴ�С�����ʵ��������������еĴ���ʹ���ܵó���ȷ�Ľ����*/
#include <stdio.h>


fun()
{
    float t;
    float a, b; 
    scanf("%f%f", &a, &b);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    printf("%5.2f,%5.2f\n", a, b);
}

main()
{
    fun();
}






