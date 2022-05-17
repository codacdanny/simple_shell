#include "main.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *line = NULL;
	size_t lineCap = 0;
	size_t lineReturn = 1;
	int stats;
	char **toks;
	pid_t childPid;

	while (lineReturn > 0)
	{
		printf("$ ");
		fflush(stdout);
		lineReturn = getline(&line, &lineCap, stdin);
		if (lineReturn == ULONG_MAX)
			break;
		toks = populate(line);
		childPid = fork();
		if (childPid != -1)
		{
			if (childPid == 0)
			{
				execve(toks[0], toks, NULL);
				perror(av[0]);
			}
			else
			{
				wait(&stats);
			}
		}
	}
	return (0);
}
