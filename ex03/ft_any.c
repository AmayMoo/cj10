/*#include <stdio.h>*/

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	ft_contains_a(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*strs[] = {"Chien", "sel", "poivre", "chat", NULL};
	int		result = ft_any(strs, &ft_contains_a);

	if (result == 1)
	{
		printf("le tableau contient au moins une fois la lettre 'a'\n");
	}
	else
	{
		printf("le tableau ne contient pas la lettre 'a'\n");
	}
	return (0);
}
*/
