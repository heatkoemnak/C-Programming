#include <stdio.h>
int main()
{
	int code,qty;  
	char name [20];
	double price;
	float total;
	float dis;
    float payment;
	
	printf("pro code:"); 
	scanf("%f",&code);
	printf("pro qty:"); 
	scanf("%d",&qty);
	printf("pro name:"); 
	scanf("%s",&name);
	printf("code:"); 
	scanf("%lf",&price);
	total=qty*price;
	if (total>=1&&total<=10)
	{
		dis=10;
	}
	else if (total>=10&&total<=20)
	{
		dis=20;
	}
	else if (total>=20&&total<=30)
	{
		dis=30;
	}
	else if (total>=30&&total<=40)
	{
		dis=40;
	}
	else if (total>=40&&total<=50)
	{
		dis=50;
	}
	else if (total>=50&&total<=60)
	{
		dis=60;
	}
	else 
	{
		dis=70;
	}
	
    payment=total-(dis*total/100);
    printf("payment= %f",payment);
  
return 0;
}
