#include<stdio.h>
#include<string.h>
int main(){
	char goods,b;
	int tot,channel,price,num,m,n,in,extra,sum;
	printf("%s ","����û���");
	scanf("%c%d%d%d",&goods,&channel,&price,&num);//�ֱ��Ӧ���ͨ����ţ����ۣ����� 
	printf("%s ","����й���"); 
	while (1){
		scanf("%c%d%d",&b,&m,&n);
		if(m==channel && n<=num && goods==b){
			tot=n*price;//totΪ�ܼ۸� 
			sum=0;
			n-=num;
			while (sum<tot){
				printf("%s\n","��Ͷ��");
				scanf("%d",&in);//Ͷ���� 
				sum+=in; //��Ͷ���� 
			}
			extra=sum-tot ;
			printf("����%dԪ\n",extra);//��������� 
		} 		
	}
	return 0;
}
