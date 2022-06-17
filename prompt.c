#include <stdio.h>
#include "shell.h"

/**
 * print_prompt - Displays the prompt "$ "
 * Return: void
 */

void print_prompt(void)
{
	    fprintf(stderr, "$ ");
}

/**
 * print_prompt1 - Displays the continuation prompt "> "
 * Return: void
 */

void print_prompt1(void)
{
	    fprintf(stderr, "> ");
}
