/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-olay <aal-olay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:14:47 by aal-olay          #+#    #+#             */
/*   Updated: 2025/09/01 15:34:10 by aal-olay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			len;

	uc = (unsigned char)c;
	len = ft_strlen(s);
	if (uc == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		len--;
		if ((unsigned char)s[len] == uc)
			return ((char *)&s[len]);
	}
	return (NULL);
}
