/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_intera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:20:23 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 08:23:36 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	for (int i = 0; i < 3; i++)
	{
		pid_t pid = fork();
        if (pid == 0) {
            printf("Padre: i=%d, pid=%d\n\n", i, pid);
        } else {
            printf("Hijo: i=%d, pid=%d\n", i, pid);
        }
	}
}
