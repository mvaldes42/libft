/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:57:18 by mvaldes           #+#    #+#             */
/*   Updated: 2019/11/13 14:08:47 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

static char	ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (*dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	char	*result;

	if (!(s1) || !(s2))
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	if (!(result = malloc((sizeof(char)) * (length + 1))))
		return (NULL);
	ft_strcpy(result, s1);
	ft_strcat(result, s2);
	return (result);
}
