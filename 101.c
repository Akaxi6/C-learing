/*����������ڴӼ�������3*4�����Ԫ�أ�ͨ�����ú���FindMax��
�����3*4����Ԫ���е����ֵ������������λ�ã�Ȼ�����������ֵ������������λ�á�
���ҳ����е�4�����󣬲�����֮��*/

#include <stdio.h>

int FindMax(int x[3][4],int *pRow,int *pCol);//�������� 

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





















