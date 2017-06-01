/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_list_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <cchampou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:32:33 by cchampou          #+#    #+#             */
/*   Updated: 2017/06/02 00:42:26 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_parse	*create()
{	
	t_parse	*e;

	e = (t_parse*)malloc(sizeof(t_parse));
	e->next = NULL;
	e->raw = NULL;
	e->flags = NULL;
	e->width = NULL;
	e->prec = NULL;
	e->len = NULL;
	e->conv = NULL;
	return (e);
}

void	push_back(t_parse **list, t_parse *e)
{
	t_parse	*tmp;

	if (*list == NULL)
		*list = e;
	else
	{
		tmp = *list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = e;
	}
}

void	print(t_parse *list)
{
	while (list)
	{
		printf("_____________\n");
		printf("raw : %s\n", list->raw);
		printf("flags : %s\n", list->flags);
		printf("width : %s\n", list->width);
		printf("prec : %s\n", list->prec);
		printf("len : %s\n", list->len);
		printf("conv : %s\n", list->conv);
		list = list->next;
	}
}