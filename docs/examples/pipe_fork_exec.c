/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_fork_exec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:41:00 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 08:50:04 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int	main(void)
{
	pid_t	pid;
	char *argv[] = {"ls", "-l", NULL};

	pid = fork();
	if (pid == 0)
	{
		// HIJO: reemplaza su código por "ls"
		execve("/bin/ls", argv, NULL);
		perror("execve");
	}
	else
	{
		// PADRE: espera al hijo
		wait(NULL);
		printf("Comando terminado\n");
	}
}
