/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 22:57:28 by zoulhafi          #+#    #+#             */
/*   Updated: 2019/01/16 23:17:40 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*cpy;

	if (alst == NULL || new == NULL)
		return ;
	cpy = *alst;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = new;
}
