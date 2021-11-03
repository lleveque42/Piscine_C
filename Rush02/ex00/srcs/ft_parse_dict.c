/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:27:29 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 21:14:24 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"for_parse_dict.h"

char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *src, char *charset);

int	ft_arrlen(char **lines)
{
	int	i;

	i = 0;
	while (lines[i] != NULL)
		i++;
	return (i);
}

t_dict	*ft_parse_dict(char *buff)
{
	   int	i;
	  char	**lines;
	  char	*line;
	t_dict	*out;

	i = 0;
	lines = ft_split(buff, "\n");
	out = malloc((ft_arrlen(lines) + 1) * sizeof(t_dict));
	if (!out)
		return (NULL);
	while (lines[i] != NULL)
	{
		line = lines[i];
		out[i].val = ft_strdup(line, " :");
		while ((*(line - 1) != ':') && *line)
			line++;
		while (*line == ' ')
			line++;
		out[i].alpha = ft_strdup(line, "");
		free(lines[i]);
		i++;
	}
	free(lines);
	out[i].val = NULL;
	return (out);
}

int	ft_check_val(t_dict *dict)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i].val)
	{
		j = 0;
		while (dict[i].val[j])
		{
			if (dict[i].val[j] < '0' || dict[i].val[j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_double(t_dict *dict)
{
	int	i;
	int	i2;

	i = 0;
	while (dict[i].val + 1 && dict[i].val)
	{
		i2 = i + 1;
		while (dict[i2].val)
		{
			if (ft_strcmp(dict[i].val, dict[i2].val) == 0)
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

t_dict	*ft_get_dict(char *dict)
{
	int		fd;
	char	buff[4096];
	t_dict	*out;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, buff, 4096);
	close(fd);
	out = ft_parse_dict(buff);
	if (!ft_check_val(out) || !ft_check_double(out))
		return (NULL);
	return (out);
}
