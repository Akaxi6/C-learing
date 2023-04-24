将任一整数转换为二进制形式。
**输入格式要求："%d" 提示信息："Input number:"
**输出格式要求："number of decimal form:%d\n" "    it\'s binary form: "
程序运行示例如下：
Input number:876
number of decimal form:876
    it's binary form: 00000000000000000000001101101100



#include <stdio.h>
int main()
{
     int n,i;
    int b[32];
    printf("Input number:");
    scanf("%d",&n);
    printf("number of decimal form:%d\n",n);
    printf("    it\'s binary form: ");
    for (i =0;i<=31;i++)
    {
        b[i]=n%2;
        n/=2;
    }
    for (i =31;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}















