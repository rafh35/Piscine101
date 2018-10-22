/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:14:11 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:35:46 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i < (nb - 1))
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}
