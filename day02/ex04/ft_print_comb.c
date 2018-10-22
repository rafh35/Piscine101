/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 10:56:44 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 19:54:22 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int tab[3];

	tab[0] = 0;
	while (tab[0] <= 7)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 8)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 9)
			{
				ft_putchar(tab[0] + 48);
				ft_putchar(tab[1] + 48);
				ft_putchar(tab[2] + 48);
				if (tab[0] != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
