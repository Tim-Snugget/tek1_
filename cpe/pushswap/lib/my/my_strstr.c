#include <unistd.h>
#include <stdio.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;
	int found = 0;
	
	while (str[i] != '\0' && found != 1) {
		while (to_find[j] != '\0' && str[i] == to_find[j]) {
			i++;
			j++;
		}
		if (to_find[j] == '\0') {
			found++;
		} else
			j = 0;
		i++;
	}
	if (found == 1) {
		my_putstr(to_find);
	} else
		return (0);
}
