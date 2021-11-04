/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testonion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:05:42 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/04 16:38:54 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_double(char c, char *s1, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (c == s1[j])
			return (1);
		j++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!check_double(s1[i], s1, i))
			ft_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if ((!check_double(s2[i], s1, ft_strlen(s1))) && !(check_double(s2[i], s2, i)))
			ft_putchar(s2[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char  *av[])
{
	if (ac != 3)
		ft_putchar('\n');
	else 
		ft_union(av[1], av[2]);
	return (0);
}
