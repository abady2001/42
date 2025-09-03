/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-olay <aal-olay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:53:09 by aal-olay          #+#    #+#             */
/*   Updated: 2025/09/03 15:02:03 by aal-olay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	write (fd, s, length);
	write (fd, "\n", 1);
}
