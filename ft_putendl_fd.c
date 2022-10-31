/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:18:19 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 13:26:58 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int	fd;

// 	fd = open("file", O_CREAT | O_RDWR);
// 	ft_putendl_fd("hellow", fd);
// 	ft_putendl_fd("sup boy", fd);
// 	ft_putendl_fd("it's me", fd);
// }