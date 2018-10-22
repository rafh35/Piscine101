/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:30:22 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 20:12:46 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*ptr;

	ptr = *begin_list;
	if(*begin_list == NULL)
	list = ft_create_elem(data);
	if (list)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
	}
	ptr->next = list;
}
