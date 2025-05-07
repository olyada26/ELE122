/*
A palindrome is a word, number, phrase, or other sequence of symbols that
reads the same backwards as forwards, such as madam or racecar, the date
"22/02/2022" and the sentence: "A man, a plan, a canal – Panama". Create a
program to verify if a given string reads the same forwards and backwards. You
should use function below for checking palindrome.
*) Take string input from the user.
**) If it is palindrome your function should print out “It is palindrome!”.
***) If not print out “It is not palindrome.”.
int isPalindrome(char str[])
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char str[]);

int main (void){
	char str[100];
	int palindrome;
	printf("Please enter: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
	palindrome=isPalindrome(str);
	if (palindrome==0){
		puts("It is palindrome");
	}else{
		puts("It is not palindrome");
	}
}

int isPalindrome(char str[]){
	int i,temp;
	size_t len = strlen(str);
	for (i = 0, temp = len - 1; i < temp; i++, temp--){
		while (i < len && !isalnum(str[i]))
		{
			i++;
		}
		while (temp >= 0 && !isalnum(str[temp])){
			temp--;
		}
		if (toupper(str[i])!=toupper(str[temp])){
			return 1;
		}
	}
	return 0;	
}
