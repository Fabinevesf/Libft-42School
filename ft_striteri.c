/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiananeves <fabiananeves@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:00:37 by faneves           #+#    #+#             */
/*   Updated: 2023/10/15 14:04:37 by fabiananeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
 unsigned int i;

 if (!s || !f)
   return;
 i = 0;
 while (s[i])
 {
    (*f)(i, s + 1);
    i++;
 }
}