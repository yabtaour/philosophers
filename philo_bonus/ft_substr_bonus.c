/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 00:08:26 by yabtaour          #+#    #+#             */
/*   Updated: 2022/05/23 00:08:28 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "philosophers_bonus.h"

char	*ft_substr(char *s, int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	int				end;

	i = 0;
	end = len + start;
	if (!s)
		return (NULL);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		while (start < end && s[start] != '\0')
		{
			ptr[i] = s[start];
			i++;
			start++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
