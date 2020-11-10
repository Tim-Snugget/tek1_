#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
	int counter2_s1 = 0;
	int counter2_s2 = 0;
        
	while (s1[counter2_s1] != '\0')
		counter2_s1++;
	while (s2[counter2_s2] != '\0')
		counter2_s2++;
	if (n < counter2_s2)
		counter2_s2 = n;
	if (counter2_s1 > counter2_s2)
		return (1);
	else if (counter2_s1 == counter2_s2)
		return (0);
	else
		return (-1);
}
