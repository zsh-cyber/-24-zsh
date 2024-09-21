#include<stdio.h>
#include<string.h>
int main(){
	char name[5]; //记录通道对应的货物 
	char s[3];
	int price[5],num[5],channel;//分别记录每个通道货物的价格和数量 
	int tot=0,money=0,need,in;//tot为总价，money为已投入金额，need为需求量，in为投入金额 
	int a1=0,a2=0,a3=0,n1=0,n2=0,n3=0,time=0;//用这些量记录1前三次操作 
	printf("%s","请放置货物\n"); 
	scanf("%s",s);
	while (strcmp(s,"END")!=0){ 
		scanf("%d",&channel);
		name[channel]=s[0];
		scanf("%d",&price[channel]);
		scanf("%d",&num[channel]);
			scanf("%s",&s);
	}
	while(1){
	printf("%s","请选择货物\n");
		scanf("%s",s) ;
		while (strcmp(s,"END")!=0){
			if(strcmp(s,"back")!=0){ // back为回退键 
				scanf("%d",&channel);
				scanf("%d",&need);
				if (name[channel]==s[0]  &&  need<num[channel]){
					a3=a2;
					a2=a1;
					a1=num[channel]; 
					num[channel]-=need;
					n3=n2;
					n2=n1;
					n1=need*price[channel];
					tot+=n1;
				}
				else{
					printf("%s\n","输入有误");
				}
			}
			else{
				printf("%s","回退成功\n");
				time+=1;
				if(time<3){
					num[channel]=a1;
					a1=a2;
					a2=a3; 
					a3=0;
					tot-=n1;
					n1=n2;
					n2=n3;
					n3=0;
				}
				else{
					printf("%s","回退次数耗尽\n");
				}
			} 
		scanf("%s",&s);	
		}
		while (tot>money){
			printf("%s","请投币\n"); 
			scanf("%d",&in);
			money+=in; 
		}
		printf("%s","购买成功\n"); 
		printf("找零%d元\n",money-tot);
	} 
	return 0;
}
