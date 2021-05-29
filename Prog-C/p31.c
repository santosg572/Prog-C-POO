#include <stdio.h>

/* copiar entrada a salida; 2a. version */

int main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}

