/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:57:33 by dimolin2          #+#    #+#             */
/*   Updated: 2022/07/19 18:59:46 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	k;

	ft_strlowcase(str);
	k = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			if (!(str[k - 1] >= 'a' && str[k - 1] <= 'z')
				&& (!(str[k - 1] >= 'A' && str[k - 1] <= 'Z'))
				&& (!(str[k - 1] >= '0' && str[k - 1] <= '9')))
			{
				str[k] = str[k] - 32;
			}
		}
		k++;
	}
	return (str);
}
