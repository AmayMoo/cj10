/*#include <stdio.h>*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = 0;
	ascending = 0;
	descending = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
		{
			ascending++;
		}
		if (f(tab[i], tab[i + 1]) <= 0)
		{
			descending++;
		}
		i++;
	}
	if (ascending == i || descending == i)
	{
		return (1);
	}
	return (0);
}
/*
int	ascending(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab1[5] = {1, -1, 3, 4, 5};
	int	tab2[5] = {5, 4, 3, 2, 0};
	int	tab3[5] = {1, 3, 2, 4, 5};

	if (ft_is_sort(tab1, 5, &ascending))
	{
		printf("tab1 est trié\n");
	}
	else
	{
		printf("tab1 est pas trié\n");
	}
	if (ft_is_sort(tab2, 5, &ascending))
	{
		printf("tab2 est trié\n");
	}
	else
	{
		printf("tab2 est pas trié\n");
	}
	if (ft_is_sort(tab3, 5, &ascending))
	{
		printf("tab3 est trié\n");
	}
	else
	{
		printf("tab3 est pas trié\n");
	}
	return (0);
}
*/
