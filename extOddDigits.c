#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
	int number, result = -1;

	printf("Enter the number: \n");
	scanf("%d", &number);
	printf("extOddDigits1(): %d\n", extOddDigits1(number));
	extOddDigits2(number, &result);
	printf("extOddDigits2(): %d\n", result);
	return 0;
}
int extOddDigits1(int num)
{
	int power = 1;
	int adder = 0;

	while (num > 0) {
		if ((num % 10) % 2 != 0) {
			adder += (num % 10)*power;
			power = power * 10;
			num = num / 10;
		}
		else 
			num = num / 10;
	}
	return adder;
}
void extOddDigits2(int num, int *result)
{
	int power = 1;
	(*result) = 0;

	while (num > 0) {
		if ((num % 10) % 2 != 0) {
			(*result) += (num % 10)*power;
			power = power * 10;
			num = num / 10;
		}
		else
			num = num / 10;

	}
}