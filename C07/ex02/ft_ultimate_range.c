/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:13:22 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/27 12:47:45 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rng;
	int	i;
	int	*array;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	rng = max - min;
	array = (int *)malloc(rng * sizeof(int));
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	while (i < rng)
	{
		array[i] = min + i;
		i++;
	}
	return (rng);
}

/*int	main()
{
	int	i;
	int	rng;
	int	min;
	int	max;
	int	*array;

	max = 100;
	min = 95;
	i = 0;
	rng = ft_ultimate_range(&array, min, max);
	printf("%d, \n", rng);
}*/
