#include <stdio.h>

int main(void){
	int number,
		a,
		i;
	printf("Please enter a number: ");
	scanf("%d",&number);
	for (i=2 ; i<=number/2 ; i++){
		a = number-i;
		while (is_prime(i) && is_prime(a)){
			printf("%d = %d + %d\n", number , i , a);
			i++;
			a = number-i;

		}
	}	
}

int is_prime(int number){
	int i,
		control=0;
	for (i=2 ; i<= number/2 ; i++){
		if (number%i == 0){
			control++;
		}
	}
	if (control>0){
		return 0;
	}else{
		return 1;
	}
}
