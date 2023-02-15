/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:47:41 by dimolin2          #+#    #+#             */
/*   Updated: 2022/07/17 17:14:00 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_char_comb2(int a, int b, int f)
{
	char	a2;
	char	a1;
	char	b2;
	char	b1;

	a2 = (a % 10) + 48;
	a = a / 10;
	a1 = (a % 10) + 48;
	ft_putchar(a1);
	ft_putchar(a2);
	write(1, " ", 1);
	b2 = (b % 10) + 48;
	b = b / 10;
	b1 = (b % 10) + 48;
	ft_putchar(b1);
	ft_putchar(b2);
	if (f != 1)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	f;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				f = 1;
			}
			else
			{
				f = 0;
			}
			ft_char_comb2(a, b, f);
			b++;
		}
		a++;
	}
}
