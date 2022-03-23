/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <gmillon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:32:58 by gmillon           #+#    #+#             */
/*   Updated: 2022/03/21 14:02:07 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_bzero(void *s, int n)
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
    // printf("ptr: %s \n",ptr);
    // printf("s: %p \n", s);
    
}

// int main(void)
// {
//     char str[22] = "hello bro";
//     int a[2] = {342124, 1234};
//     char str2[22] = "haello bro";
//     int a2[2] = {342124, 1234};
//     int n = 10;
//     printf("memset result: %s \n",str);
//     printf("my result: %s \n",str2);
//     bzero(a2, n);

//     ft_bzero(a, n);

//     printf("in main: %p \n", &str2);

//     // ft_memset(str2, '$', n);
//     // ft_memset(a, '$', 2);
//     // printf("%d \n",a2[0]);
//     // printf("ft result: %s \n",str2);
//     // printf("rl result: %s \n",str);
//     printf("ft result: %d \n",a2[0]);
//     printf("rl result: %d \n",a[0]);




//     // printf("%s", ft_memset(str, '$', 4));

// }