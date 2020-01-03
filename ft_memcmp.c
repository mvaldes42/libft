/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:14:55 by mvaldes           #+#    #+#             */
/*   Updated: 2020/01/03 12:38:13 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	if (n == 0 || (s1 == NULL || s2 == NULL))
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (!*str1 && !*str2)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)str1[i] - str2[i]);
		i++;
	}
	return (0);
}
