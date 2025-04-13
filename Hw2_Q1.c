#include <stdio.h>

int main (void){
	int number,
		i,
		s,
		h,
		a;
	printf("Please enter a number: ");
	scanf("%d", &number);
	if (number >=1 || number <=20 ){	
		if (number%2 == 0){
			for (i=1 ; i<=number ; i++){
				for (s=1 ; s<=i ; s++){
					printf("%d ", s);
				}
				printf("\n");
			}
		} else {
			for (h=1 ; h<=number ; h++){
				for (a=number ; a>=(number-h+1) ; a--){
					printf("%d ", a);
				}
				printf("\n");
			}
		}
	}else{
		printf("This is not in range");
	}
}
