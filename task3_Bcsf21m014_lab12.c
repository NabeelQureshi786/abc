#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct dictionaryElement
{
	char word[100];
	char meaning[50];
};
void wordsOfSpecificLenght(struct dictionaryElement s[]);
int main()
{
  struct dictionaryElement s1[5];
  strcpy(s1[0].word,"Borrow");
  strcpy(s1[1].word,"refuse");
  strcpy(s1[2].word,"absence");
  strcpy(s1[3].word,"zone");
  strcpy(s1[4].word,"dialogue");
  strcpy(s1[0].meaning,"Carry something");
   strcpy(s1[1].meaning,"say no to work");
   strcpy(s1[2].meaning,"Not presebt");
    strcpy(s1[3].meaning,"Some Area");
   strcpy(s1[4].meaning,"conservation between two persons");
   wordsOfSpecificLenght(s1);
}
void wordsOfSpecificLenght(struct dictionaryElement s[])
{
	int count =0;
	int len;
	printf("Enter a lenght\n");
	scanf("%d",&len);
	for(int i=0;i<5;i++)
	{
		count=0;
		for(int j=0;s[i].word[j]!='\0';j++) 
		{
		count++	;
		}
		if(count==len)
		{
			printf("Word you search is %s with meaning is %s\n ",s[i].word,s[i].meaning);
		}
	}
}
