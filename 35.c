/*小明今年12岁，他母亲比他大24岁。编写一个程序计算小明的母亲在几年后比小明的年龄大一倍，那时他们两人的年龄各是多少？
**输出格式要求："year=%d\n" "mingAge=%d\n" "motherAge=%d\n"*/

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
