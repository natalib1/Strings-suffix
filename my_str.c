#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 100

char str[size];
char c;

int suffix(char str [], char c);

int main()
{
	printf("\n enter string\n");
	gets(str);
	printf("\n enter letter\n");
	c=getchar();
	if (c=="\n")
		c=getchar();
	printf("\n");
	int count1=suffix(str,c);
	printf("%d \n", count1); /*i didn't know if we had to print it so i print to be sure*/
	return count1;
}
