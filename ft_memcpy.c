/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:13:32 by mvaldes           #+#    #+#             */
/*   Updated: 2020/01/03 11:26:51 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tpsrc;
	unsigned char	*tpdst;

	if (dst == NULL || src == NULL)
		return (NULL);
	tpdst = (unsigned char *)dst;
	tpsrc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n--)
	{
		*tpdst++ = *tpsrc++;
	}
	return (dst);
}
