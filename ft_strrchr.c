/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:48:32 by mvaldes           #+#    #+#             */
/*   Updated: 2019/11/13 15:10:22 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = (char *)s;
		s++;
	}
	if (*s == (char)c)
		str = (char *)s;
	return (str);
}
