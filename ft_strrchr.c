/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <gmillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:35:52 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/23 16:49:35 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(char *str, int c)
{
	char	*result;

	result = NULL;
	while (*str)
	{
		if (*str == (char)c)
			result = str;
		str++;
	}
	if (*str == (char)c)
		result = str;
	return (result);
}
