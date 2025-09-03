/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-olay <aal-olay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:11:59 by aal-olay          #+#    #+#             */
/*   Updated: 2025/09/03 14:25:02 by aal-olay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*string;

	string = ft_strdup(s);
	if (!string)
		return (NULL);
	i = 0;
	while (string[i])
	{
		string[i] = (*f)(i, string[i]);
		i++;
	}
	return (string);
}
