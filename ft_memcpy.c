/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 04:23:37 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/19 20:03:21 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uns_dst;
	unsigned char	*uns_src;
	size_t			i;

	uns_dst = (unsigned char *)dst;
	uns_src = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src == dst)
		return (dst);
	while (i < n)
	{
		uns_dst[i] = uns_src[i];
		i++;
	}
	return (dst);
}
