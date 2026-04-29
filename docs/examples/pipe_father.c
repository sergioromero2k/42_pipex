/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_father.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 07:31:42 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 07:58:27 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		pipe_fd[2];
	pid_t	pid;
		char msg[50];

	pipe(pipe_fd);
	pid = fork();
	if (pid == 0)
	{
		close(pipe_fd[1]);
		read(pipe_fd[0], msg, 50);
		printf("Hijo recibido: %s\n", msg);
	}
	else
	{
		close(pipe_fd[0]);
		write(pipe_fd[1], "Mensaje del padre", 18);
	}
	return (0);
}
