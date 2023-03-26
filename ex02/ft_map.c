#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = (int *)malloc(length * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

int	ft_multiply_by_two(int nb)
{
	return (nb * 2);
}

int	ft_putnbr(int n)
{
	return (n);
}
/*
int	main(void)
{
	int	i;
	int	tab[] = {1, 2, 3, 4, 5};
	int *result = ft_map(tab, 5, &ft_multiply_by_two);
	//int	*result = ft_map(tab, 5, &ft_putnbr);
	if (result != NULL)
	{
		i = 0;
		while (i < 5)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}
	return (0);
}*/
