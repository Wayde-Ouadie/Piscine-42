/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:53:38 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/22 15:43:07 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sl;
	unsigned int	dl;

	i = 0;
	j = 0;
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (size + sl);
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < (size - dl - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sl + dl);
}
