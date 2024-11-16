#include <stdio.h>
//An input string and determine value of length.
#include<string.h>

int main() 
{
	printf("Hello world\n");
	char a[100];
	int lenth;
	printf("Enter a string to calculate it's lenth:\n");
	gets(a);
	lenth = strlen(a);
	printf("lenth of entered string: %d\n",lenth);
}

