#include <unistd.h>
#include "my.h"

int check_n(char const *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
		i++;
	if (n > i)
		n = i;
}

char *my_strncpy(char *dest,char const *src, int n)
{
	int i = 0;

	check_n(src, n);
	while (src[i] != src[n]) {
		dest[i] = src[i];
		i++;
	}
}
