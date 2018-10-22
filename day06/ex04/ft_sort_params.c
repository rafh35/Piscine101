/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 20:23:44 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 20:52:40 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmpar(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 2;
	while (i < argc)
	{
		if (ft_strcmpar(argv[i - 1], argv[i]) > 0)
		{
			swap = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstring(argv[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
