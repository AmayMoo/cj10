/*#include <stdio.h>*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
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
	//if (str[i] != '\0')
	//{
		//return (1);
		//i++;
	//}
	return (0);
}

int	main(void)
{
	char	*strs[] = {"poivre", "sel", "Laura", "chat", NULL};
	int		count = ft_count_if(strs, &ft_contains_a);

	printf("chaines de caractere avec la lettre 'a' : %d\n", count);
	return (0);
}
*/
