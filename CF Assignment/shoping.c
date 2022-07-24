#include<stdio.h>
int main(){
	int item,money,tax,total_price,shortfall;
	printf("Enter the money that you have:");
	scanf("%d",&money);
	printf("Enter price of item:");
	scanf("%d",&item);
	printf("Tax:");
	scanf("%d",&tax);
	total_price=tax+item;
	printf("Total price:%d\n",total_price);
	shortfall=total_price-money;
	if (total_price>money){
		
		printf("you have shortfall of %d,You can not buy",shortfall);
	
	}else if (total_price<money){
		
		printf("Yes you have enough money to buy.");
		
	}else{
		
	}
	return 0;
	
}
