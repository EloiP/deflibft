/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:32:59 by epascual          #+#    #+#             */
/*   Updated: 2024/10/01 15:54:43 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	iter;

	iter = 0;
	while (iter < count)
	{
		((char *)dest)[iter] = (char)c;
		iter++;
	}
	return (dest);
}
