#include<stdio.h>
#include<string.h>
int main(){
	int input,price,extra;//input为投币，price为总价。extra为找零 
	int sum=0;//sum记录已投入金额 
	printf("%s:","总价为");
	scanf("%d",&price);
	printf("%s:\n","请投币"); 
	bool flag = true;
	while (flag = true){
	scanf("%d",&input);
	sum+=input;
	if (sum>=price){
		extra=sum-price;
		flag=false;
		printf("找零%d元",extra);
		return 0;
	}
}
}
