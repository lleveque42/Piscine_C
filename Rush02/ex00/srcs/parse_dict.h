/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 08:46:24 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/30 13:00:11 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_H
# define PARSE_DICT_H

# include<unistd.h>
# include<stdlib.h>
# include<libgen.h>
# include<fcntl.h>
# include"t_dict.h"

int	ft_arrlen(char **lines);
t_dict	*ft_parse_dict(char *buff);
t_dict	*ft_get_dict(char *dict);

#endif
