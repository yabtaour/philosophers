/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_timestamp_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 00:08:36 by yabtaour          #+#    #+#             */
/*   Updated: 2022/05/23 00:08:38 by yabtaour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "philosophers_bonus.h"

long long	ft_timestamp(void)
{
	struct timeval	te;
	long long		milliseconds;

	gettimeofday(&te, NULL);
	milliseconds = ((te.tv_sec * 1000) + te.tv_usec / 1000);
	return (milliseconds);
}
