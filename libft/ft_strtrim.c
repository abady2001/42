/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-olay <aal-olay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:58:01 by aal-olay          #+#    #+#             */
/*   Updated: 2025/09/02 15:09:06 by aal-olay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beginning;
	size_t	end;
	char	*string;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	beginning = 0;
	end = (ft_strlen(s1)-1);
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
		++beginning;
	while (s1[beginning] && ft_strchr(set, s1[end]))
		--end;
	string = ft_substr (s1, beginning, ((end - beginning) + 1));
	return (string);
}
