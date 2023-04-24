/*下面程序用于从键盘输入3*4矩阵的元素，通过调用函数FindMax，
求出这3*4矩阵元素中的最大值及其所在行列位置，然后输出这个最大值及其所在行列位置。
（找出其中的4处错误，并改正之）*/

#include <stdio.h>

int FindMax(int x[3][4],int *pRow,int *pCol);//函数声明 

main()
{ 
    int a[3][4], max, i, j, row, col; 
     
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)  
        {
            scanf("%d",&a[i][j]); 
        }
    }
    
    max = FindMax(a,&row,&col);
    
    printf("max=%d,row=%d,col=%d\n",max,row,col);
}    
int FindMax(int x[3][4],int *pRow,int *pCol)
{ 
    int max, i, j;
    max = x[0][0]; 
    for (i=0; i<3; i++)
    {
        for (j=1; j<4; j++)
        {
            if (x[i][j] > max)
            { 
                max = x[i][j]; 
                *pRow = i; 
                *pCol = j; 
            }
        }
    }   
    return max;
}





















