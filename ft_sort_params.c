#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}

int main(int argc, char **argv)
{
	int i;
	char temp[10000] = {0};

	i = 1;
	while (i < argc -1)
	{
		if (ft_strcmp(argv[i], argv[i + i] > 0))
		{
			ft_strcpy(temp, argv[i + 1]);
			ft_strcpy(argv[i + 1], argv[i]);
			ft_strcpy(argv[i], temp);

			i = 1;
		}
		else
			i++;
	}
	return (0);
}
