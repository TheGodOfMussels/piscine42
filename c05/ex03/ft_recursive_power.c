/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:17:36 by dimolin2          #+#    #+#             */
/*   Updated: 2022/08/01 20:17:37 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	n;

	i = power;
	n = nb;
	if (i > 1)
	{
		return (nb * ft_recursive_power(nb, (i - 1)));
	}
	if (i == 0)
		return (1);
	if (i < 0)
		return (0);
	return (n);
}
