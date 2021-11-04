/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:35:37 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/04 20:31:38 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_index(char c, int str_base)
{
	char *base;
	int	i;
	
	base = "0123456789abcdef";
	i = 0;
	while (i < str_base)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char *check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcpy(const char *str, char *dest)
{
	int	i;

	i = 0;
	dest = malloc(sizeof(char) * 1000);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_atoi_base(const char	*str, int str_base)
{
	int i;
	char *strcopy;
	int result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	strcopy = ft_strcpy(str, strcopy);
	strcopy = check_input(strcopy);
	while (strcopy[i] < '0' && strcopy[i] > '9')
	{
		if (strcopy[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		else
			return (0);
	}
	while (check_index(strcopy[i], str_base) != -1)
	{
		result = result * str_base + check_index(strcopy[i], str_base);
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("A35", 16));
	return (0);
}
