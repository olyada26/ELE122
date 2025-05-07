/*
Write a C program that takes integers as input and sorts the numbers in
ascending order. First ask for length of input integers. Then take that number of
integers. And print sorted integers as result. You have to write and use function
below for sorting integers.
void sortIntegers(int *nums, int len)
*/
#include <stdio.h>

void sortIntegers(int *nums, int len);

int main(void){
	int len;
	printf("Please enter the length: ");
	scanf("%d",&len);
	int nums[len];
	int i;
	printf("Can you enter integers: ");
	for (i=0;i<len;i++){
		scanf("%d",&nums[i]);
	}
	sortIntegers(nums,len);	
	for (i=0;i<len;i++){
		printf("%d ",nums[i]);
	}
}

void sortIntegers(int *nums, int len){
	int i,s;
	int min;
	int temp;
	for (i=0;i<len-1;i++){
		min=i;
		for(s=i+1;s<len;s++){
			if (nums[s]<nums[min]){
				min=s;
			}
		}
		temp = nums[i];
		nums[i]=nums[min];
		nums[min]=temp;
	}
}
