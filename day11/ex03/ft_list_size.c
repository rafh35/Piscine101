/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 15:39:26 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 20:15:09 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 1;
	if(begin_list == 0)
		return(0);
	while (begin_list->next != 0)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
