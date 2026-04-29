/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_duplicate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:01:32 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 08:19:51 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		x;
	pid_t	pid;

	x = 10;
	pid = fork();
	if (pid == 0)
	{
		x = 20;
		printf("Hijo x= %d\n", x);
	}
	else
	{
		printf("Padre: x = %d\n", x);
	}
	return (0);
}
