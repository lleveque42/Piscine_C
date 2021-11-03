/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_parse_dict.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 08:46:24 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:37:07 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOR_PARSE_DICT_H
# define FOR_PARSE_DICT_H

# include<unistd.h>
# include<stdlib.h>
# include<libgen.h>
# include<fcntl.h>
# include"t_dict.h"

int		ft_atoi(char *num);
char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *src, char *charset);
int		ft_strcmp(char *s1, char *s2);

#endif
