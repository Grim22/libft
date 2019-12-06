/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:20:36 by bbrunet           #+#    #+#             */
/*   Updated: 2019/11/12 18:48:14 by bbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    void	ft_lstadd_back(t_list **alst, t_list *new)
    {
        t_list	*p;

        if (alst == 0 || new == 0)
            return ;
        if (*alst == 0)
        {
            *alst = new;
            return ;
        }
        p = *alst;
        while (p->next)
            p = p->next;
        p->next = new;
        new->next = 0;
    }
