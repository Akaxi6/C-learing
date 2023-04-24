/*改错题：用户从键盘任意输入一个数字表示月份值n，程序显示该月份对应的英文表示，
若n不在1～12之间，则输出“Illegal month”。
注意：
（1）请将修改正确后的完整源程序拷贝粘贴到答题区内。
（2）对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
（3）当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。   */
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
