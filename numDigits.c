#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int number, result;
int main()
{
	printf("Enter the number: \n");
	scanf("%d", &number);
	printf("numDigits1(): %d \n", numDigits1(number));
	numDigits2(number, &result);
	printf("numDigits2(): %d \n", result);
	return 0;
}
int numDigits1(int num)
{
	int count = 0;
	int temp = num;
	while (temp > 0) {
		temp = temp / 10;
		count += 1;
	}
	return count;
}
void numDigits2(int num, int *result)
{
	*result = 0;
	int temp2 = num;
	while (temp2 > 0) {
		temp2 = temp2 / 10;
		*result +=1;
	}
}
