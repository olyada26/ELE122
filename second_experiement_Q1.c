#include <stdio.h>

int main(void){
	int number,
		i,
		first_number = 1,
		second_number = 1,
		sum = 0 ;
	printf("Please enter a number: ");
	scanf("%d",&number);
	for (i=1 ; i<= number ; i++ ){
		first_number = second_number;
		second_number = sum;
		sum = first_number + second_number;
		printf("%d ", sum);
	}
}
