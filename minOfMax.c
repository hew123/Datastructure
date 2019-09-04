#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int minOfMax(int ar[4][4]);
int main() {
	int ar[4][4], row, col, min;

	printf("Enter the matrix (4x4) row by row: \n");
	for (row = 0; row<4; row++)
		for (col = 0; col<4; col++)
			scanf("%d", &ar[row][col]);
	min = minOfMax(ar);
	printf("minOfMax(): %d\n", min);
	return 0;
}
int minOfMax(int ar[4][4])
{
	int a, b, c;
	int maxlist[4]; 
	int min2;
	for (a = 0; a < 4; a++) {
		maxlist[a] = ar[a][0];
		for (b = 0; b < 4; b++) {
			if (ar[a][b] > maxlist[a])
				maxlist[a] = ar[a][b];
		}
	}
	for (c = 0; c < 4; c++) {
		min2 = maxlist[0];
		if (maxlist[c] < min2)
			min2 = maxlist[c];
	}
	return min2;
}