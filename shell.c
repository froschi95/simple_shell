#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * main - simple shell
 * Return: 0 for success
 */

int main(void)
{
	while (1)
	{
		print_prompt();
	}
	exit(EXIT_SUCCESS);
}
