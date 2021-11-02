/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:57:28 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/14 21:51:14 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	chiffre1;
	char	chiffre2;
	char	chiffre3;

	chiffre1 = '0';
	while (chiffre1 <= '7')
	{
		chiffre2 = chiffre1 + 1;
		while (chiffre2 <= '8')
		{
			chiffre3 = chiffre2 + 1;
			while (chiffre3 <= '9')
			{
				write(1, &chiffre1, 1);
				write(1, &chiffre2, 1);
				write(1, &chiffre3, 1);
				if (chiffre1 != '7')
					write(1, ", ", 2);
				chiffre3++;
			}
			chiffre2++;
		}
		chiffre1++;
	}
}
