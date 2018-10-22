/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 10:32:09 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 19:37:56 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		posneg;
	int		res;

	i = 0;
	posneg = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		posneg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 0 && str[i] <= 9 && str[i] != '\0')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	if (posneg == 1)
		return (-res);
	else
		return (res);
}
