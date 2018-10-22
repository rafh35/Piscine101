/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 10:07:17 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 22:50:57 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		letters_nbr(char *str, int i)
{
	int		nbr;

	nbr = 0;
	while ((str[i] != '\t' && str[i] != ' ' && str[i] != '\n') && str[i])
	{
		nbr++;
		i++;
	}
	return (nbr);
}

int		words_nbr(char *str)
{
	int		i;
	int		word;
	int		space;
	int		words_nbr;

	i = 0;
	word = 0;
	space = 1;
	words_nbr = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && !word)
		{
			word = 1;
			space = 0;
			words_nbr++;
		}
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && !space)
		{
			space = 1;
			word = 0;
		}
		i++;
	}
	return (words_nbr);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char*) * (words_nbr(str) + 1))))
		return (NULL);
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if (!(tab[j] = malloc(sizeof(char) * letters_nbr(str, i) + 1)))
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
