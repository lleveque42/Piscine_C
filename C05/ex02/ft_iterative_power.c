/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:46:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/26 14:10:37 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (!power)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
