/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:53:08 by mvaldes           #+#    #+#             */
/*   Updated: 2020/01/03 14:08:20 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_cpy;
	char	*src_cpy;

	if (dst == NULL || src == NULL)
		return (NULL);
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	i = 0;
	if (src_cpy < dst_cpy)
		while (++i <= len)
			dst_cpy[len - i] = src_cpy[len - i];
	else
		while (len-- > 0)
			*(dst_cpy++) = *(src_cpy++);
	return (dst);
}
