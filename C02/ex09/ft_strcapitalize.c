/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:38:50 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/20 12:57:20 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char *c)
{
	int	booleen;

	if (c[0] >= 'A' && c[0] <= 'Z')
		booleen = 1;
	else if (c[0] >= 'a' && c[0] <= 'z')
		booleen = 1;
	else if (c[0] >= '0' && c[0] <= '9')
		booleen = 1;
	else
		booleen = 0;
	return (booleen);
}

char	change(char *c, int booleen)
{
	if (c[0] >= 'A' && c[0] <= 'Z')
	{
		if (booleen == 1)
			c[0] = c[0] + 32;
	}
	else if (c[0] >= 'a' && c[0] <= 'z')
	{
		if (booleen == 0)
			c[0] = c[0] - 32;
	}
	else
	{
		c[0] = c[0];
	}
	return (c[0]);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	booleen;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		booleen = is_alphanumeric(&str[i - 1]);
		str[i] = change(&str[i], booleen);
		i++;
	}
	return (str);
}
