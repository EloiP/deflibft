/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:05:19 by epascual          #+#    #+#             */
/*   Updated: 2024/08/11 11:27:44 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	char	p;
	char	n;

	p = 'P';
	n = 'N';
	if (num >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &n, 1);
	}
}
//int main(void){ft_is_negative(-12);return(0);}
