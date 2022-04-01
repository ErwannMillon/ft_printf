/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:18:09 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/25 18:40:56 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strllen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	end;

	src_len = ft_strllen(src);
	dest_len = ft_strllen(dest);
	end = dest_len;
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (end < size - 1))
	{
		dest[end] = src[i];
		end++;
		i++;
	}
	dest[end] = 0;
	return (dest_len + src_len);
}
