#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}

int my_strcmp(char const *s1, char const *s2)
{
	int counter_s1 = 0;
	int counter_s2 = 0;

	while (s1[counter_s1] != '\0')
		counter_s1++;
	while (s2[counter_s2] != '\0')
		counter_s2++;
	if (counter_s1 > counter_s2)
		return (1);
	else if (counter_s1 == counter_s2)
		return (0);
	else
		return (-1);
}
