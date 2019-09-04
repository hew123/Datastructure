#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findMinMax(int ar[], int size, int *min, int *max);
int main()
{
	int ar[40];
	int i, size;
	int min, max;
	printf("Enter array size: \n");
	scanf("%d", &size);
	printf("Enter %d data: \n", size);
	for (i = 0; i<size; i++)
		scanf("%d", &ar[i]);
	findMinMax(ar, size, &min, &max);
	printf("min = %d; max = %d\n", min, max);
	return 0;
}
void findMinMax(int ar[], int size, int *min, int *max)
{
	int i;

	*max = *(ar + 0);
	*min = *(ar + 0);

	for (i = 0; i < size; i++) {
		if (*(ar + i) > *max)
			*max = *(ar + i); 
		else if (*(ar + i) < *min)
			*min = *(ar + i);
	} 


}