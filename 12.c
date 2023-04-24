/*判断二维空间中的点，是否在圆内（输出：该点在圆内、该点在圆上、该点在圆外）。
**输入格式要求："%f,%f" "%f" "%f,%f" 提示信息："请输入圆的圆心坐标：" "请输入圆的半径：" 
"请输入要判断的点的坐标(x,y)："
**输出格式要求："该点在圆内\n" "该点不在圆内\n" "该点在圆上\n" 
程序示例运行如下：
请输入圆的圆心坐标：3.5,4.5
请输入圆的半径：6
请输入要判断的点的坐标(x,y)：5.5,7.8
该点在圆内*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,r,x,y,w,d;
	printf("请输入圆的圆心坐标：");
	scanf("%f,%f",&a,&b);
	printf("请输入圆的半径：");
	scanf("%f",&r);
	printf("请输入要判断的点的坐标(x,y)：");
	scanf("%f,%f",&x,&y);
	w=pow(((y-b)*(y-b)+(x-a)*(x-a)),1.0/2);
	d=w-r;
	if(d>0)
	{
		printf("该点不在圆内\n");
	}
	else if(d==0)
	{
		printf("该点在圆上\n");
	}
	else
	{
		printf("该点在圆内\n");
	}
	return 0;
}
