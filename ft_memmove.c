/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:53:28 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/19 02:45:59 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*uns_dst;
	unsigned char	*uns_src;

	uns_dst = (unsigned char *)dst;
	uns_src = (unsigned char *)src;
	if ((!uns_dst || !uns_src) && len == 0)
		return (NULL);
	if (!uns_dst && !uns_src)
		return (NULL);
	if (src == dst)
		return (dst);
	if (uns_dst > uns_src)
	{
		uns_dst += len - 1;
		uns_src += len - 1;
		while (len--)
			*uns_dst-- = *uns_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
