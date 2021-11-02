/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:59:03 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/26 15:27:59 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num_or_sign(char *c)
{
	if (c[0] >= '0' && c[0] <= '9')
		return (1);
	else if (c[0] == '-' || c[0] == '+')
		return (1);
	else
		return (0);
}

int	what_sign(int sign, char	*str)
{
	if (str[0] == '-')
		sign = sign * -1;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (is_num_or_sign(&str[i]))
	{
		while (str[i] == '-' || str[i] == '+')
		{
			sign = what_sign(sign, &str[i]);
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - 48);
			i++;
		}
	}
	return (result * sign);
}
