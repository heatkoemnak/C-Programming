#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter 3 number: ");
	scanf("%d%d%d",&a, &b ,&c);
	if (a<b&& a<c){
		printf("smallest number is :%d",a);
	}else if(b<a&&b<c){
		printf("smallest number is : %d",b);
	}else{
		printf("mmasllest is :",c);
	}
	return 0;
}

