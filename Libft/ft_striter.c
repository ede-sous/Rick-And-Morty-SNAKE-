/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-sous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:15:36 by ede-sous          #+#    #+#             */
/*   Updated: 2016/11/09 15:40:04 by ede-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int		i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i] != '\0')
			(*f)(&s[i++]);
	}
	return ;
}