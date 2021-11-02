/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:14:41 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/02 15:22:35 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	int	nb;

	nb = nbr / 10;
	if (nbr > 10)
		ft_putnbr(nb);
	ft_putchar(nbr % 10 + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;

	i = 0;
	while (par[i].str)
	{
		if (par[i].copy)
		{
			ft_putstr(par[i].str);
			ft_putchar('\n');
			ft_putnbr(par[i].size);
			ft_putchar('\n');
			ft_putstr(par[i].copy);
			ft_putchar('\n');
		}
		i++;
	}
}
