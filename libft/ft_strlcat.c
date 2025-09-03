/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-olay <aal-olay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:13:04 by aal-olay          #+#    #+#             */
/*   Updated: 2025/08/31 19:23:42 by aal-olay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;
	size_t	j;

	i = 0;
	slen = 0;
	dlen = 0;
	while (src[slen])
		slen++;
	while (dst[dlen])
		dlen++;
	j = dlen;
	if (dlen >= size || size == 0)
		return (size + slen);
	while (src[i] && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
