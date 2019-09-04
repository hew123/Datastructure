#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
	char a[80], b[80];
	printf("Enter the first string: \n");
	gets(a);
	printf("Enter the second string: \n");
	gets(b);
	printf("compareStr(): %d\n", compareStr(a, b));
	return 0;
}
int compareStr(char *s, char *t)
{
	int i = 0;
	for (i = 0; s[i] == t[i]; i++) {
		if ( s[i] == '\0')
			return 0;
	}

	return (s[i] - t[i]);

}