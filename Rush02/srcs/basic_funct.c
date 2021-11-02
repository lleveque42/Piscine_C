/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_funct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:27:29 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 20:52:21 by alemarch         ###   ########.fr       */
/*   Updated: 2021/10/30 20:26:31 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strlen(char *str, int i)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len - i);
}

int	ft_strlen_zero(char *str, int i)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (str[j] == '0')
		j++;
	while (str[len + j])
	{
		len++;
	}
	return (len - i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n, unsigned int zero)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < zero)
	{
		dest[i] = '0';
		i++;
	}
	while (i < 3)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
