/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:00:05 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/21 16:35:22 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *to_find)
{
	int	len;

	len = 0;
	while (to_find[len])
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	icopy;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			icopy = i;
			while (str[i] == to_find[j] && to_find[j])
			{
				j++;
				if (j == ft_strlen(to_find))
					return (&str[icopy]);
				i++;
			}
		}
		else
			i++;
	}
	return (0);
}
