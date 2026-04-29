/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 07:26:43 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 07:28:38 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main() {
    int pipe_fd[2];
    char buffer[50];

    pipe(pipe_fd);
    write(pipe_fd[1], "Hola pipe\n", 10);
    read(pipe_fd[0], buffer, 50);
    printf("Leido: %s", buffer);
    
    return 0;
}
