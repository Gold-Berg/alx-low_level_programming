#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mark;

	for (mark = 0; mark < n; mark++)
	{
		s[mark] = b;
	}
	return (s);
}
