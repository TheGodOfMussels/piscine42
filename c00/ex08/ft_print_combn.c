/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javellis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:36:38 by javellis          #+#    #+#             */
/*   Updated: 2022/07/19 16:47:29 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int n)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (++i < n)
	{
		if (tab[i - 1] >= tab[i])
			flag = 0;
	}
	if (!flag)
		return ;
	i = -1;
	while (++i < n)
	{
		ft_putchar(tab[i] + 48);
	}
	if (tab[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(32);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= (10 - n) && n >= 1)
	{
		ft_print(tab, n);
		if (n == 10)
			break ;
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
