/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:30:40 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/04 19:00:27 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	put_in_dest(char *dest, int *tab, int count, int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		dest[i++] = '-';
	count--;
	while (count >= 0)
	{
		dest[i] = tab[count] + '0';
		i++;
		count--;
	}
}

char *ft_itoa(int nbr)
{
	int i;
	char *dest;
	unsigned int	nbcopy;
	int	count;
	int	*tab;

	i = 0;
	nbcopy = nbr;
	count = 1;
	while (nbcopy > 9)
	{
		nbcopy = nbcopy / 10;
		count++;
	}
	nbcopy = nbr;
//	tab = malloc(sizeof(int) * count);
	dest = malloc(sizeof(char) * (count + 1));
	dest[count] = '\0';
	while (count - 1 >= 0)
	{
		dest[count - 1] = (nbcopy % 10) + '0';
		nbcopy = nbcopy / 10;
		i++;
		count--;
	}
	dest[i] = (nbcopy % 10) + '0';
	dest[i + 1] = '\0';
/*	if (nbr < 0)
		dest = malloc(sizeof(char) * (count + 2));
	else 
		dest = malloc(sizeof(char) * (count + 1));
	put_in_dest(dest, tab, count, nbr);*/
	return (dest);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("itoa = %d || ft_itoa = %s", atoi(av[1]), ft_itoa(atoi(av[1])));
	return (0);
}
