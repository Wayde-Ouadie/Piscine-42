/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:21:32 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/24 18:57:23 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		i = 1;
		j = 0;
		while (nb > 0)
		{
			nb -= i;
			i += 2;
			j++;
		}
		if (nb == 0)
			return (j);
	}
	return (0);
}
