/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:58:36 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/20 10:01:06 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		nbr1;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nbr1 = nb * -1;
		ft_putnbr(nbr1);
	}
	else
	{
		nbr1 = nb;
		while (nbr1 > 9)
		{
			ft_putnbr(nbr1 / 10);
			nbr1 = nbr1 % 10;
		}
		ft_putchar(nbr1 + 48);
	}
}
