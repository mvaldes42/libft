/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:22:12 by mvaldes           #+#    #+#             */
/*   Updated: 2020/01/03 11:18:02 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (haystack == NULL || needle == NULL)
		return (NULL);
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
