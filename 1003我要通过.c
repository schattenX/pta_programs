#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define ERROR -1
#define MAX_SIZE 100

int IsRight(char *s, int len);

int main(int argc, char *argv[])
{
	int n = 0;
	char string[MAX_SIZE];
	
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%s", &string);
		int len = strlen(string);	
		
		if (IsRight(string) == OK)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		string = "";
	}
	
	return 0;
}

int IsRight(char *s, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if ( *(s + i) == 'P' || *(s + i) == 'T' || *(s + i) == 'A' || *(s + i) == '' )
		{
			
		}
		
	}
}
