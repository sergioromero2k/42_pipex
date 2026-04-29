/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_fork.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 07:54:43 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 07:58:05 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	pid_t pid = fork();

	if (pid == 0)
	{
		printf("Soy el hijo. pid == %d\n", getpid());
	}
	else
	{
		printf("Soy el padre.\nMi hijo tiene pid = %d\n", pid);
	}

	return (0);
}
