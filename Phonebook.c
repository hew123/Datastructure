#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
	char name[20];
	char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main()
{
	PhoneBk s[MAX];
	char t[20];
	int size;
	size = readin(s);
	printf("Enter search name: \n");
	gets(t);
	search(s, size, t);
	return 0;
}
int readin(PhoneBk *p)
{
	int i = 0;

	do {
		printf("Enter name: \n");
		gets(p[i].name);
		if (strcmp(p[i].name, "#") != 0) {
			printf("Enter tel: \n");
			gets(p[i].telno);
			i++;
		}
		else
			break;
	} while (1);

	return i;
}
void search(PhoneBk *p, int size, char *target)
{
	int j;
	int count = 0;

	for (j = 0; j < size; j++) {
		if (strcmp(target, p[j].name) == 0)
			printf("Name = %s, Tel = %s \n", p[j].name, p[j].telno);
		else
			count += 1;
	}
	if (count == size)
		printf("Name not found! \n");
}