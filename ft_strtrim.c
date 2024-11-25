/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:39:01 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/17 22:03:25 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		trimmed_s1len;
	int		i;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set))
		i++;
	while (end > 0 && check(s1[end], set))
		end--;
	trimmed_s1len = (end - i + 1);
	if (trimmed_s1len < 0)
		trimmed_s1len = 0;
	str = malloc(sizeof(char) * (trimmed_s1len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + i, trimmed_s1len);
	str[trimmed_s1len] = '\0';
	return (str);
}
