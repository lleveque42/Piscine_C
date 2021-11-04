/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:03:45 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/03 13:15:36 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*put_in_dest(int *tab, int nbr, int n)
{
	int	i;
	char *dest;

	i = 0;
	if (nbr < 0)
	{
		n++;
		dest = malloc(sizeof(char) * (n + 1));
		dest[i] = '-';
		n--;
		i++;
	}
	else
		dest = malloc(sizeof(char) * (n + 1));
	n--;
	printf("%d\n", tab[n]);
	while (n >= 0)
	{
		dest[i] = tab[n] + '0';
		n--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		n;
	int		nbrcopy;
	int		*tab;

	n = 1;
	nbrcopy = nbr;
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbrcopy < 0)
		nbrcopy = nbrcopy * -1;
	while (nbrcopy > 9)
	{
		nbrcopy = nbrcopy / 10;
		n++;
	}
	tab = malloc(sizeof(int) * n);
	if (!tab)
		return (0);
	i = 0;
	nbrcopy = nbr;
	if (nbr < 0)
		nbrcopy = nbr * -1;
	while (nbrcopy > 9)
	{
		tab[i] = nbrcopy % 10;
		printf("%d", nbrcopy % 10);
		nbrcopy = nbrcopy / 10;
		i++;
	}
	tab[i] = nbrcopy % 10;
	return (put_in_dest(tab, nbr, n));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d = %s\n", atoi(av[1]), ft_itoa(atoi(av[1])));
	return (0);
}
