/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:22:12 by mvaldes           #+#    #+#             */
/*   Updated: 2019/11/13 15:09:59 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!needle[i])
		return ((char*)haystack);
	while (haystack[i] && i < len - 1)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i < len - 1 && needle[j])
		{
			if (!needle[j + 1] && (j + i) < len)
			{
				return (char*)(haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
