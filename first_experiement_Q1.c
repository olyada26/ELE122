#include <stdio.h>

int main(void){
	int number;
	printf("Please enter an odd number: ");
	scanf("%d", &number);
	if (number%2!=0){
		int i,s,h;
		for (i=1 ; i<=number ; i=i+2){
			for (h=((number-i)/2) ; h>=1 ; h--){
				printf(" ");
			}			
			for (s=1 ; s <=i ; s++){
				printf("*");
			}
			printf("\n");
		}	
		int a,b,c;
		for (a=number-2 ; a>=1 ; a=a-2){
			for (b=((number-a)/2) ; b>=1 ; b--){
				printf(" ");
			}			
			for (c=1 ; c <=a ; c++){
				printf("*");
			}
			printf("\n");
		}	
	}else{
		printf("You entered even number ");
	}
}
