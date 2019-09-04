#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
	int power;
	float number, result;

	printf("Enter the number and power: \n");
	scanf("%f %d", &number, &power);
	printf("power1(): %.2f\n", power1(number, power));
	power2(number, power, &result);
	printf("power2(): %.2f\n", result);
	return 0;
}
float power1(float num, int p)
{	
	float product = 1;
	for (p = p; p >0; p--) {

		product = product*num;
	}
	return product;
	
}
void power2(float num, int p, float *result)
{
	*result = 1;
	for (p = p; p >0; p--) {

		*result = *result*num;
	}
	
}