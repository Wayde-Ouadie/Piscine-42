/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:14:40 by oel-feng          #+#    #+#             */
/*   Updated: 2023/07/17 20:15:21 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (j == 0)
			{
				str[i] = str[i] - 32;
				j = 1;
			}
		}
		else if ('0' <= str[i] && str[i] <= '9')
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}
