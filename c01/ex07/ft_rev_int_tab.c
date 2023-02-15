/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:04:51 by dimolin2          #+#    #+#             */
/*   Updated: 2022/07/18 17:23:13 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab( int *tab, int size)
{
	int	end;
	int	fst;
	int	t;

	fst = 0;
	end = size - 1;
	while (fst < (size / 2))
	{
		t = tab[fst];
		tab[fst] = tab[end];
		tab[end] = t;
		fst++;
		end--;
	}
}
