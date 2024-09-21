#include<stdio.h>
#include<string.h>
int main(){
	char goods,b;
	int tot,channel,price,num,m,n,in,extra,sum;
	printf("%s ","请放置货物");
	scanf("%c%d%d%d",&goods,&channel,&price,&num);//分别对应货物，通道序号，单价，数量 
	printf("%s ","请进行购买"); 
	while (1){
		scanf("%c%d%d",&b,&m,&n);
		if(m==channel && n<=num && goods==b){
			tot=n*price;//tot为总价格 
			sum=0;
			n-=num;
			while (sum<tot){
				printf("%s\n","请投币");
				scanf("%d",&in);//投入金额 
				sum+=in; //已投入金额 
			}
			extra=sum-tot ;
			printf("找零%d元\n",extra);//输出找零金额 
		} 		
	}
	return 0;
}
