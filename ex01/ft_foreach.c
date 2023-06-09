/*#include <stdio.h>*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_multiply_by_two(int nb)
{
	printf("%d ", nb * 2);
}

void	ft_putnbr(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length = 5;

	ft_foreach(tab, 5, &ft_putnbr);
	printf("\n");
	ft_foreach(tab, length, &ft_multiply_by_two);
	printf("\n");
	return (0);
}
*/
