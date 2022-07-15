#include<stdio.h>
int main(){
	char model[10];
	int year, speed,seats;
	printf("Model:");
	scanf("%s",&model);
	printf("seats:");
	scanf("%d",&seats);
	printf("year:");
	scanf("%d",&year);
	printf("speed:");
	scanf("%d",&speed);
	printf("The car model of %c has %d seats was release in %d with speed %d Km/h",model,seats,year,speed);
	
}
