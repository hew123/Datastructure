#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
int findTarget1(char *target, char nameptr[SIZE][80], int size);
int findTarget2(char *target, char nameptr[SIZE][80], int size);
int main()
{
	char nameptr[SIZE][80];
	char t[40];
	int i, result, size;

	printf("Enter size: \n");
	scanf("%d", &size);
	printf("Enter %d names: \n", size);
	for (i = 0; i<size; i++)
		scanf("%s", nameptr[i]);
	printf("Enter target name: \n");
	scanf("\n");
	gets(t);
	result = findTarget1(t, nameptr, size);
	printf("findTarget(): %d\n", result);
	printf("findTarget2(): %d\n", findTarget2(t, nameptr,size));
	return 0;
}
int findTarget1(char *target, char nameptr[SIZE][80], int size)
{
	int i, j;
	int count = -1;
	for ( i = 0 ; i < size ; i++)
		for (j = 0; (nameptr[i][j] == target[j] ) && (target[j] != '\0'); j++) {
			if (target[j+1] == '\0') {
				 count = i;
			}
		}
	return count ; 
}

int findTarget2(char *target, char nameptr[SIZE][80], int size)
{
	int i;
	int count = -1;
	for (i = 0; i < size; i++){
		if ( strcmp ( target , nameptr[i]) == 0)
				count = i;
			}
	return count;
}