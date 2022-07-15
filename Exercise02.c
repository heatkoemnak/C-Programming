#include<stdio.h>
int main(){
	float pi=3.14,valume;
	int r,h;
	printf("Enter r:");
	scanf("%d",&r);
	printf("Enter h:");
	scanf("%d",&h);
	valume = pi*h*r*r/3;
	printf("The valume is %0.2f",valume);
}
