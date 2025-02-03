/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:22:12 by epascual          #+#    #+#             */
/*   Updated: 2024/10/06 18:08:35 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *str)
{
	unsigned long	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
