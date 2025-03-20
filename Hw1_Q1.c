/*
 Write a C program that gets an integer number from the user as the input and reports the
nearest integer square root of this input number. You should implement your own function such
as ‘mysqrt’ to calculate the square root of the input without using the sqrt() function and math.h
library. The main function should send the input to ‘mysqrt’ function, receive back the result
as an integer and report the result with an appropriate prompt.
Some examples for integer square roots:
Integer square root of 26 = 5
Integer square root of 16 = 4
Integer square root of 80 = 8
Integer square root of 25 = 5
*/
#include <stdio.h>

int mysqrt (int number){
	int control_number = 1 ;
	while (number/(control_number+1) > control_number) {
	control_number += 1;
	}
	printf ("Integer square root of %d = %d", number, control_number);
}
int main(void){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	mysqrt(number);
}
