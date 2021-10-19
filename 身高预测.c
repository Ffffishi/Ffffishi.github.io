#include<stdio.h>
int main()
{
 float chHeight,faHeight,moHeight;
 char sex,sport,diet;
 
 printf("请输入父亲的身高（cm）");
 scanf("%f",&faHeight);
 printf("请输入母亲的身高（cm）");
 scanf("%f",&moHeight);
 printf("孩子的性别是 (M代表男，F代表女)"); 
 scanf(" %c",&sex);
 printf("孩子是否爱好锻炼(Y代表是，N代表否，)");
 scanf(" %c",&sport);
 printf("孩子是否有良好的饮食习惯(Y代表是，N代表否)");
 scanf(" %c",&diet);
	
 sex=='M'?chHeight=(faHeight+moHeight)*0.54:chHeight=(faHeight*0.923+moHeight)/2.0;
 sport=='Y'?chHeight=chHeight*1.02；chHeight=chHeight; 
 diet=='Y'?chHeight=chHeight*1.015:chHeight=chHeight;	
 
 printf("孩子的预测身高为%fcm",chHeight);
	
 return 0;
}
