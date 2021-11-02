/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:57:56 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/14 21:48:30 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar((nb1 / 10) + '0');
			ft_putchar((nb1 % 10) + '0');
			write(1, " ", 1);
			ft_putchar((nb2 / 10) + '0');
			ft_putchar((nb2 % 10) + '0');
			nb2++;
			if (nb1 != 98)
				write (1, ", ", 2);
		}
		nb1++;
	}
}
