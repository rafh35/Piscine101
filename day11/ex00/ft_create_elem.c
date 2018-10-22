/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_elem.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 16:12:30 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 19:40:05 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list		*list;

	list = NULL;
	if (!(list = (t_list*)malloc(sizeof(t_list))))
	return (0);
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
