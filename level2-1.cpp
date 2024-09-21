#include<stdio.h>
#include<string.h>
int main(){
	while(1){
		char name[5]; //货物名称 
		char s[3];//s为输入的字符串变量 
		int price[5],num[5],channel;//price记录某通道货物价格，num记录某通道货物数量，channel为通道序号 
		int tot=0,money=0,need,in;//tot为总价格 ，money为已投入金额，need为某货物需求量，in为某次投入的金额 
		printf("%s\n","放置货物"); 
		scanf("%s",s);
		while (strcmp(s,"END")!=0){ 
			scanf("%d",&channel);
			name[channel]=s[0];
			scanf("%d",&price[channel]);
			scanf("%d",&num[channel]);
			scanf("%s",&s);
		}
		printf("%s\n","请选择货物");
		scanf("%s",s) ;
		while (strcmp(s,"END")!=0){
			scanf("%d",&channel);
			scanf("%d",&need);
			if (name[channel]==s[0]  &&  need<num[channel]){
				num[channel]-=need;
				tot+=need*price[channel];
			}
			else{
				printf("%s\n","输入有误");
			}
			scanf("%s",&s);
		}
		while (tot>money){
			printf("%s\n","请投币");
			scanf("%d",&in);
			money+=in;
		}
		printf("找零%d元",money-tot);
		return 0;
	}
}
