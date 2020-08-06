/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunet <bbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 18:44:39 by julnolle          #+#    #+#             */
/*   Updated: 2020/08/06 18:37:53 by bbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strjoin_back(char *back, char **src)
{
	char *tmp;

	if (back == NULL || src == NULL)
		return ;
	if (*src)
	{
		tmp = ft_strdup(*src);
		free(*src);
		*src = NULL;
	}
	else
		tmp = ft_strdup("");
	*src = ft_strjoin(tmp, back);
	free(tmp);
	tmp = NULL;
}
