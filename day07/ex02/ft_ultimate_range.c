/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 17:42:44 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 23:00:19 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*table;
	int		len;

	if (min >= max)
		return (0);
	len = max - min;
	if(!(table = (int*)malloc(sizeof(*table) * len)))
		return (0);
	i = 0;
	while (min < max)
	{
		table[i] = min;
		i++;
		min++;
	}
	*range = table;
	return (i);
}
