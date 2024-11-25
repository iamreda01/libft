/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:15:59 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/20 01:26:12 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	size_t	dstlen;
	size_t	totallen;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	totallen = srclen + dstlen;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (totallen);
}
