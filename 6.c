/*对输入的8个字符串(每个字符串长度不超过20)按照字典顺序进行排序并输出。不限定排序方法，不能使用goto语句。
输入输出格式：
输入：%s
输出：%s\n

输入：多个字符串用空格分隔
输出：排序好的字符串，每行一个字符串，末尾有空行。

输入输出样例：
输入：
diankuang liuxu sui fengwu qingbo taohua zhu shuiliu
输出：
diankuang
fengwu
liuxu
qingbo
shuiliu
sui
taohua
zhu*/

#include<stdio.h>
#include<string.h>
#define MAX 8
#define CMAX 20
int main()
{		   	   	  
    char a[MAX][CMAX], term[CMAX];                                   //1
    int i, j;
    for (i = 0; i < 8; i++)
    {		   	   	  
        scanf("%s", a[i]);                                            //1
    }

    for (i = 0; i < 8 - 1; i++)                                //1
    {		   	   	  
        for (j = 1; j < 8 - i; j++)                            //1
        {		   	   	  
            if (strcmp(a[j], a[j - 1]) < 0)                     //1
            {		   	   	  
                strcpy(term, a[j]);                             //1
                strcpy(a[j], a[j - 1]);                         //1
                strcpy(a[j - 1], term);                         //1
            }
        }
    }
    for (i = 0; i < 8; i++)
    {		   	   	  
        printf("%s\n", a[i]);
    }
    return 0;
}		   	 
