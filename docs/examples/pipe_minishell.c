/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe_minishell.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:41:00 by sergio-alej       #+#    #+#             */
/*   Updated: 2026/04/29 08:44:08 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main() {
    char *cmd = "ls";
    char *path = getenv("PATH");

    char *p = strtok(path, ":");
    while (p != NULL) {
        char fullpath[256];
        snprintf(fullpath, sizeof(fullpath), "%s/%s", p, cmd);
    }
}