#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3
void transpose(int M[SIZE][SIZE]);
void display(int M[SIZE][SIZE]);
int main()
{
	int ar[SIZE][SIZE];
	int i, j;

	printf("Enter the matrix (3x3) row by row: \n");
	for (i = 0; i<SIZE; i++)
		for (j = 0; j<SIZE; j++)
			scanf("%d", &ar[i][j]);
	printf("transpose():\n");
	transpose(ar);
	display(ar);
	return 0;
}
void display(int M[SIZE][SIZE])
{
	int l, m;
	for (l = 0; l < 3; l++) {
		for (m = 0; m < 3; m++)
			printf("%d ", M[l][m]);
		printf("\n");
	}
	printf("\n");
}
void transpose(int M[SIZE][SIZE])
{
	int a, b;
	int tempAr[3][3];

	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++) {
			tempAr[a][b] = M[b][a];
		}
	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++) {
			M[a][b] = tempAr[a][b];
		}
}