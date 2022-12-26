#include<stdio.h>
#pragma warning (disable:4996)
#define size 100
void makeStr(char* userstring, char* newString, char c);
int main()
{
	char string[size][size], string2[size][size], ch;
	char *ptr = string;
	char *ptr2 = string2;
	printf("Enter your string");
	gets(ptr);
	printf("Enter your character\n");
	scanf("%c",&ch);
	makeStr(ptr, ptr2, ch);
	
}
void makeStr(char* userstring, char* newString, char c)
{
	char* address = newString;
	if (*userstring == c)
	{
		while (*userstring != ' ' && *userstring!='\0')
		{
			*newString = *userstring;
			newString++;
			userstring++;
		}
		*newString = ',';
		newString++;
	}
	
	while (*userstring != '\0')
	{
		if (*userstring == ' ')
		{
			userstring++;
			if (*userstring == c)
			{
				while ((*userstring !=' ' && *userstring!='\0'))
				{
					*newString = *userstring;
					newString++;
					userstring++;
				}
				if (*userstring != '\0')
				{
					*newString = ',';
				}
				if (*userstring == '\0')
				{
					*newString = '\0';
				}
				
				newString++;
			}

		 }
		userstring++;
	}
	*newString = '\0';
	newString = address;
	printf("%s", newString);
}