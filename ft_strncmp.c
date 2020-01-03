/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <mvaldes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:08:39 by mvaldes           #+#    #+#             */
/*   Updated: 2020/01/03 14:15:31 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	j = n - 1;
	i = 0;
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	if (s2[i] == '\0' && s1[i] != '\0')
		return (1);
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && (i < j))
	{
		if (s1[i] > 127 || s2[i] > 127)
			return (1);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
