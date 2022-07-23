#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *myintput(){
	char *c =malloc(9); 
	printf("Enter number:");
	scanf("%s",c);
	return c;
	
	
}
void checkNumber(char in[]){
	int number = atoi(in);
	if (number ==0){
		return;
	}
	if (number %2==1){
		printf("this is Odd number.\n");
		
	}else{
		printf("This is Even number\n ");
	}
}

int main(){
	
	
	
	char in[9];
	while(1>0){
		
		strcpy(in, myintput());
		
		if (strcmp(in, "x")==0){
			break;			
		}
		checkNumber(in);
					
	}
	return 0;
	 
	
}
