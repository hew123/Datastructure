#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
	int id; /* staff identifier */
	int totalLeave; /* the total number of days of leave allowed */
	int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);
int main()
{
	leaveRecord listRec[10];
	int len;
	int id, leave, canTake = -1;
	getInput(listRec, &len);
	printList(listRec, len);
	printf("Please input id, leave to be taken: \n");
	scanf("%d %d", &id, &leave);
	canTake = mayTakeLeave(listRec, id, leave, len);
	if (canTake == 1)
		printf("The staff %d can take leave\n", id);
	else if (canTake == 0)
		printf("The staff %d cannot take leave\n", id);
	else
		printf("The staff %d is not in the list\n", id);
	return 0;
}
void getInput(leaveRecord list[], int *n)
{
	int total;

	*n = 0;
	printf("enter number of records input : \n");
	scanf("%d", &total);
	while ((*n) != total) {
		printf("enter id, totalLeave, leaveTaken : \n");
		scanf("%d %d %d", &list[*n].id, &list[*n].totalLeave, &list[*n].leaveTaken);
		(*n)++;
	} 
	
}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n)	
{
	int p ; 
	for (p = 0; p < n ; p++) {
		if (list[p].id == id) {
			return (((list[p].leaveTaken) + leave) <= list[p].totalLeave);
		}
	}
	//return -1;
}
void printList(leaveRecord list[], int n)
{
	int p;
	printf("The staff list:\n");
	for (p = 0; p < n; p++)
		printf("id = %d, totalleave = %d, leave taken = %d\n",
			list[p].id, list[p].totalLeave, list[p].leaveTaken);
}
