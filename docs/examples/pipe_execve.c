/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_execve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:36:56 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 08:38:44 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*argv[] = {"ls", "-l", NULL};
	char	*envp[] = {NULL};

	execve("/bin/ls", argv, envp);
	perror("exceve");
	return (1);
}
