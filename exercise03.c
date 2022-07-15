
#include <stdio.h>
int main() {
	int j, numbers[5],count_odd=0;
	printf("number1: "); 
    scanf("%d", &numbers[1]);
    printf("number2: "); 
    scanf("%d", &numbers[2]);
    printf("number3: "); 
    scanf("%d", &numbers[3]);
	printf("number4: "); 
    scanf("%d", &numbers[4]);
    printf("number5: "); 
    scanf("%d", &numbers[5]);
	for(j = 1; j <= 5; j++) {
		if((numbers[j]%2) != 0) 
		{
		   count_odd += 1;
		}	
    }
   	printf("\nThe result is: %d", count_odd);
	printf("\n");
	return 0;
}