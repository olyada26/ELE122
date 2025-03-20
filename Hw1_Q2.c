/*
Write a C program where the user enters two positive integers, "a" and "b". Your program
should include a function that calculates the greatest common divisor (GCD) of "a" and "b"
using the Euclidean algorithm. The function should return the GCD of the two numbers. Your
main function should then print the GCD of "a" and "b".
*/


#include <stdio.h>

int main(void){
	int a,b ;
	int gcd_of_all;
	printf("Please enter the number a: ");
	scanf("%d", &a);
	printf("Please enter the number b: ");
	scanf("%d", &b);	
	gcd_of_all = gcd(a,b);
	printf("GCD of 'a' and 'b' is %d ", gcd_of_all);
}

int gcd(int a, int b){
	int greater_number, lower_number, temp;
	if (a>=b){
		greater_number = a;
		lower_number = b;
	}else {
		greater_number = b;
		lower_number = a;
	}
	if (a==0) {
		return b;
	}else if (b==0) {
		return a;
	}else {
		while (greater_number%lower_number !=0) {
			temp = greater_number%lower_number;
			greater_number=lower_number;
			lower_number = temp;			
		}
		return lower_number;
	}
}

