/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yns-sl <yns-sl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:51:10 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/24 10:44:23 by yns-sl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					si;
	unsigned long long	res;

	i = 0;
	res = 0;
	si = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			si *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (res > __LONG_LONG_MAX__ && si == 1)
		return (-1);
	if ((res - 1 > __LONG_LONG_MAX__ )&& si == -1)
		return (0);
	return ((int)res * si);
}
int main()
{
	printf("%d", ft_atoi("-922337203685477580"));
	printf("\n%d", atoi("-922337203685477580"));
}
