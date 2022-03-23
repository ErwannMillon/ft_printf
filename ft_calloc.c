/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <gmillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:32:44 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/21 20:44:08 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
static void ft_bzero(void *s, int n)
{
    int     i;
    char    *ptr;
    
    ptr = (char *)s;
    i = 0;
    while (i < n)
    {
        *ptr = 0;
        ptr++;
        i++;
    }
    ptr -= i;
}
void *ft_calloc(size_t nitems, size_t size)
{
	void	*mem;

	mem = malloc(nitems * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nitems * size);
	return (mem);
}
