/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:46:28 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/04 17:23:21 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_double(char *str, char c, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}

void ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (!(check_double(s1, s1[i], i)) && !(check_double(s2, s2[j], j)) && s1[i] == s2[j])
				ft_putchar(s1[i]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 3)
		ft_putchar('\n');
	else
		ft_inter(av[1], av[2]);
	return (0);
}
