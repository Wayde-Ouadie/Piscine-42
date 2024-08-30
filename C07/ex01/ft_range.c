/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:34:36 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/27 12:43:55 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	rng;
	int	i;
	int	*array;

	i = 0;
	if (max <= min)
		return (0);
	rng = max - min;
	array = (int *)malloc(rng * sizeof(int));
	if (!array)
		return (0);
	while (i < rng)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int	main()
{
	int	i;
	int	rng;
	int	*array;
	int	min;
	int	max;

	max = 100;
	min = 95;
	i = 0;
	rng = max - min;
	array = ft_range(min, max);
	while (i < rng)
	{
		printf("%d, ", array[i]);
		i++;
	}
}*/
