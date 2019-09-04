#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int rSquare1(int num);
int main()
{
	int x, result;
	printf("Enter the number: \n");
	scanf("%d", &x);
	printf("rSquare1(): %d\n", rSquare1(x));
	return 0;
}
int rSquare1(int num)
{
	if (num == 1)
		return 1;
	else {
		return (num * 2 - 1) + rSquare1(num - 1);
		
	}

}