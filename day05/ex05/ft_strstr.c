/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 12:06:32 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/13 08:36:06 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)

{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		j = 0;
		if (to_find[0] == '\0')
			return ((char*)str);
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char*)str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}