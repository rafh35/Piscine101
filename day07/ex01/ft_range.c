/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 15:40:24 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 22:31:12 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		len;
	int		*table;

	len = max - min;
	if (min >= max)
		return (NULL);
	if (!(table = (int*)malloc(sizeof(*table) * len)))
		return (NULL);
	i = 0;
	while (min < max)
	{
		table[i] = min;
		i++;
		min++;
	}
	return (table);
}
