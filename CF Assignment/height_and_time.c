#include<stdio.h>
#include<math.h>
int main(){
	
	double theta, dis, pv, time, g, height;
	printf("enter angle in radian :");
	scanf("%f", &theta);
	printf("enter distance :");
	scanf("%d", &dis);
	printf("enter velocity :");
	scanf("%d", &pv);
	printf("enter grvitational :");
	scanf("%d", &g);
	time = dis/pv*cos(theta);
	height = pv*sin(theta)*time-g*time*time/2;
	printf("The flight will take %0.2f second.\n", time);
	printf("The height at impact is %0.2f feet.", height);
	return 0;
		
}

