#include<stdio.h>
#include<string.h>
int main(){
	int input,price,extra;//inputΪͶ�ң�priceΪ�ܼۡ�extraΪ���� 
	int sum=0;//sum��¼��Ͷ���� 
	printf("%s:","�ܼ�Ϊ");
	scanf("%d",&price);
	printf("%s:\n","��Ͷ��"); 
	bool flag = true;
	while (flag = true){
	scanf("%d",&input);
	sum+=input;
	if (sum>=price){
		extra=sum-price;
		flag=false;
		printf("����%dԪ",extra);
		return 0;
	}
}
}
