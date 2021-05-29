#include <stdio.h>

/* copiar entrada a salida; 2a. version */

int main()
{
	int c, nl;
	
	while ((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
	printf("%d\n", nl);
}

