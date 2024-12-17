/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:35:03 by epascual          #+#    #+#             */
/*   Updated: 2024/10/01 20:09:46 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	iter;
	void			*ns;

	ns = (void *)s;
	iter = 0;
	while (iter < n)
	{
		if (((unsigned char *)ns)[iter] == (unsigned char)c)
		{
			return (ns + iter);
		}
		iter++;
	}
	return (NULL);
}
