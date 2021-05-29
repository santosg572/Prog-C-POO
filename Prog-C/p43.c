#include <stdio.h>
#define MAXLINE 1000	/* tamaño de la linea de entrada maximo */

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

/* imprime la linea mas larga */

int main()
{
	int len;		/* longitud de la linea actual */
	int max;	/* longitud maxima vista hasta ahora */
	char line[MAXLINE];	/* linea de entrada actual */
	char longest[MAXLINE];	/* linea mas larga salvada aqui */

	max = 0;

	while ((len = getline1(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) 
		printf("%s", longest);
	return 0;
}

int getline1(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if ( c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

