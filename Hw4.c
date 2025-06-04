/*
Write a C program that:
1. Reads a line of text (up to 100 characters) from the user.
2. Counts how many vowels (a, e, i, o, u both uppercase and lowercase) and how many consonants appear
in the text.
3. Reverses the text into a new string, skipping any non-letter characters (spaces, punctuation, digits,
etc.) when determining the reversal.
Instructions
- Create a header file named text_utils.h and declare your prototypes there.
- In text_utils.h, implement these three functions:
int countVowels(const char *s); // Counts vowels in s
int countConsonants(const char *s); // Counts consonants in s
void reverseString(const char *src, char *dst, int len);
// Recursively reverses src into dst, skipping non-letter characters
- In your `main.c` :
char buffer[101]; // to hold the input line
char rev[101]; // to hold the reversed result
1. Use a do…while loop to read the user’s input into buffer.
2. Call countVowels(buffer) and countConsonants(buffer) to compute and print the counts.
3. Call reverseString(buffer, rev, strlen(buffer)) and then print rev.
4. Use if…else or switch statements inside your counting functions to classify characters, and use
break/continue as needed to skip non-letter characters.
5. Ensure you handle memory correctly (no dynamic allocation needed; use the static buffers above).
Example
Input: Hello, World! 123
Vowels: 3
Consonants: 7
Reversed text: !dlroW ,olleH
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "text_utils.h"

int main (void){
	char buffer[101], rev[101];
	int i;
	int vowels,consonants;
	char a;
	printf("Please enter a text: ");
	do {
        a = getchar();
        buffer[i++] = a;
    } while (a != '\n' && i < 100);
    buffer[i - 1] = '\0';
	vowels=countVowels(buffer);
	printf("Vowels: %d\n",vowels);
	consonants=countConsonants(buffer);
	printf("Consonants: %d\n",consonants);
	reverseString(buffer,rev,strlen(buffer));
	printf("Reverse text: %s\n",rev);
}
