/*第5章 实验2：体型判断。
医务工作者经广泛的调查和统计分析，根据身高与体重因素给出了以下按“体指数”进行体型判断的方法。体指数计算公式是：
      t = w /(h*h) 
其中：t是体指数；w是体重，其单位为千克；h是身高，其单位为米。根据给定的体指数t计算公式，可判断你的体重属于何种类型：
     当 t<18 时，为低体重；
 当 18≤t<25 时，为正常体重；
 当 25≤t<27 时，为超重体重； 
    当 t≥27 时，为肥胖。

****输入提示信息格式："Please enter h,w:\n"
****输入数据格式要求："%f,%f"（先读入身高，再读入体重，身高以米读入，体重以千克读入）
****输出数据格式要求:
      当 t<18 时，输出："Lower weight!\n"       
  当 18≤t<25 时，输出："Standard weight!\n"
  当 25≤t<27 时，输出："Higher weight!\n"
    当 t≥27 时， 输出："Too fat!\n"

程序运行示例：
Please enter h,w:
1.64,45↙
Lower weight!*/

#include<stdio.h>
int main()
{
	float w,h,t;
	printf("Please enter h,w:\n");
	scanf("%f,%f",&h,&w);
	t=w/(h*h);
	if(t<18)
	{
		printf("Lower weight!\n");
	}
	else if(18<=t&&t<=25)
	{
		printf("Standard weight!\n");
	}
	else if(25<=t&&t<=27)
	{
		printf("Higher weight!\n");
	}
	else
	{
		printf("Too fat!\n");
	}
	return 0;
}
