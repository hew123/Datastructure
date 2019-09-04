#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
	int x, y, result;
	printf("Enter 2 numbers: \n");
	scanf("%d %d", &x, &y);
	printf("gcd1(): %d\n", gcd1(x, y));
	gcd2(x, y, &result);
	printf("gcd2(): %d\n", result);
	return 0;
}
int gcd1(int num1, int num2)
{
	int i; 
	int count = 0;

	for (i = 1; i <= num1; i++) {
		if ((num2 % i == 0) && (num1 % i == 0))
			count = i;
	}
	return count;
}
void gcd2(int num1, int num2, int *result)
{
	int i;

	for (i = 1; i <= num1; i++) {
		if ((num2 % i == 0) && (num1 % i == 0))
			*result = i;
	}
}