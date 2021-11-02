/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:21:23 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/19 10:27:31 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	compt;

	compt = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
		{
			compt = 0;
			i++;
		}
	}
	if (compt == 1)
		return (1);
	else
		return (0);
}
