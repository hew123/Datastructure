#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void readMatrix(int M[4][4]);
void reduceMatrix(int matrix[4][4]);
void display(int M[4][4]);
int main()
{
	int A[4][4];
	readMatrix(A);
	reduceMatrix(A);
	printf("reduceMatrix(): \n");
	display(A);
	return 0;
}
void display(int M[4][4])
{
	int l, m;
	for (l = 0; l < 4; l++) {
		for (m = 0; m < 4; m++)
			printf("%d ", M[l][m]);
		printf("\n");
	}
	printf("\n");
}
void readMatrix(int M[4][4])
{
	int i, j;
	printf("Enter the matrix (4x4) row by row: \n");
	for (i = 0; i<4; i++)
		for (j = 0; j<4; j++)
			scanf("%d", &M[i][j]);
}
void reduceMatrix(int matrix[4][4])
{
	int a, b, c;
	for ( a = 0 ; a < 3 ; a ++)
		for (b = 0; b < 3 ; b++) {
			if (a == b) {
				c = a + 1;
				do {
					matrix[a][b] += matrix[c][b];
					matrix[c][b] = 0;
					c++;
				} while( c < 4);
			}
		}
}