#include<stdio.h>
#include<string.h>
int main(){
	char goods;
	int channel,price,num;
	scanf("%c %d %d %d",&goods,&channel,&price,&num);//��Ӧ��������ͨ����ţ����ۣ����� 
	printf("%d:",channel);
	for (int i=0;i<num;i++){
		printf("%c",goods);
	}
	printf(" %d",price);
	return 0;
}
