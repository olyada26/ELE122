 #include <stdio.h>
void factorial(int number);
 
int main(void) {
	int result;
	printf("Please enter a number: ");
	scanf("%d",&result);
	factorial(result);
}

 void factorial (int number){
	long long factorial=1;
	int i;
	for (i=1 ; i<=number ; i++){
		factorial = factorial*i;	
		printf("%ld\n",factorial);
	}
	printf("This is the result: %ld", factorial);
	
}
