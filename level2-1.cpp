#include<stdio.h>
#include<string.h>
int main(){
	while(1){
		char name[5]; //�������� 
		char s[3];//sΪ������ַ������� 
		int price[5],num[5],channel;//price��¼ĳͨ������۸�num��¼ĳͨ������������channelΪͨ����� 
		int tot=0,money=0,need,in;//totΪ�ܼ۸� ��moneyΪ��Ͷ���needΪĳ������������inΪĳ��Ͷ��Ľ�� 
		printf("%s\n","���û���"); 
		scanf("%s",s);
		while (strcmp(s,"END")!=0){ 
			scanf("%d",&channel);
			name[channel]=s[0];
			scanf("%d",&price[channel]);
			scanf("%d",&num[channel]);
			scanf("%s",&s);
		}
		printf("%s\n","��ѡ�����");
		scanf("%s",s) ;
		while (strcmp(s,"END")!=0){
			scanf("%d",&channel);
			scanf("%d",&need);
			if (name[channel]==s[0]  &&  need<num[channel]){
				num[channel]-=need;
				tot+=need*price[channel];
			}
			else{
				printf("%s\n","��������");
			}
			scanf("%s",&s);
		}
		while (tot>money){
			printf("%s\n","��Ͷ��");
			scanf("%d",&in);
			money+=in;
		}
		printf("����%dԪ",money-tot);
		return 0;
	}
}
