#include<stdio.h>
#include<string.h>
int main(){
	char name[5]; //��¼ͨ����Ӧ�Ļ��� 
	char s[3];
	int price[5],num[5],channel;//�ֱ��¼ÿ��ͨ������ļ۸������ 
	int tot=0,money=0,need,in;//totΪ�ܼۣ�moneyΪ��Ͷ���needΪ��������inΪͶ���� 
	int a1=0,a2=0,a3=0,n1=0,n2=0,n3=0,time=0;//����Щ����¼1ǰ���β��� 
	printf("%s","����û���\n"); 
	scanf("%s",s);
	while (strcmp(s,"END")!=0){ 
		scanf("%d",&channel);
		name[channel]=s[0];
		scanf("%d",&price[channel]);
		scanf("%d",&num[channel]);
			scanf("%s",&s);
	}
	while(1){
	printf("%s","��ѡ�����\n");
		scanf("%s",s) ;
		while (strcmp(s,"END")!=0){
			if(strcmp(s,"back")!=0){ // backΪ���˼� 
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
					printf("%s\n","��������");
				}
			}
			else{
				printf("%s","���˳ɹ�\n");
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
					printf("%s","���˴����ľ�\n");
				}
			} 
		scanf("%s",&s);	
		}
		while (tot>money){
			printf("%s","��Ͷ��\n"); 
			scanf("%d",&in);
			money+=in; 
		}
		printf("%s","����ɹ�\n"); 
		printf("����%dԪ\n",money-tot);
	} 
	return 0;
}
