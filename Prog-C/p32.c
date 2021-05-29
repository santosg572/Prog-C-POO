#include <stdio.h>

/* cuenta caracteres en la entrada; 1a. version */

int main()
{
	long nc;
	
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

