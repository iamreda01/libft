/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:41:51 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/19 06:02:21 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	int		j;

	srclen = ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (srclen);
	while (src[i] && i < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srclen);
}
