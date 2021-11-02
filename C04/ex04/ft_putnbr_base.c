/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 09:29:22 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/27 10:40:32 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_base_is_ok(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len == 0 || len == 1)
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbrcopy;
	unsigned int	len;

	len = ft_strlen(base);
	if (!check_base_is_ok(base, len))
		ft_putchar(0);
	else
	{
		nbrcopy = nbr;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbrcopy = nbr * -1;
		}
		if (nbrcopy >= len)
			ft_putnbr_base(nbrcopy / len, base);
		ft_putchar(base[nbrcopy % len]);
	}
}
