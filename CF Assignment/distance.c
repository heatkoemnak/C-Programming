#include<stdio.h>
int main(){
	float x1, x2, y1, y2, z1, z2, d;
	printf("Enter the 1st point:");
	scanf("%f %f %f", &x1, &y1, &z1);
	printf("Enter the 2nd point:");
	scanf("%f %f %f", &x2, &y2, &z2);
	d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
	printf("The distance between(%0.f, %0.f, %0.f) and (%0.f,%0.f,%0.f) is %0.2f", x1, y1, z1, x2, y2, z2, d);
	return 0;
}