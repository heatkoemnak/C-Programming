#include<stdio.h>
int main(){
	int size,service,M,S,L,W,V;
	printf("Choose your service(W,V):");
	scanf("%d%d", &service, &size);
	//printf("Enter your size(S,M,L):");
	//scanf("%d",&size);
	if (service=='W'&&size=='L'){
		printf("Price is 140.");
	}else if(service=='V'&&size=='S'){
		printf("Price is 120.");
	}else if(service=='W'&&size=='S'){
		printf("Price is 100.");
	}else if(service=='W'&&size=='M'){
		printf("Price is 120.");
	}else if(service=='V'&&size=='M'){
		printf("Price is 140.");
	}else if(service=='V'&&size=='M'){
		printf("Price is 160.");
    }
	return 0;
}