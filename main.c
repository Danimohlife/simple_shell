#include "main.h"
/**
 * main - Main Shell
 * @argc: Array Count
 * @argv: arg supply at run time
 * Return: Exit Value
 */
int main(int argc, char **argv)
{
	char **spar, *get;
	int current = 1, loop = 0, handle = 0;

	(void)argc;

	if (argv[1] != NULL)
		collect_args(argv[1], argv);
	signal(SIGINT, command_call);
	while (current)
	{
		loop += 1;
		if (isatty(STDIN_FILENO))
			search_for();

		get = linebase();
		if (get[0] == '\0')
			continue;

		records(get);
		spar = command_search(get);

		if (stringcompare(spar[0], "exit") == 0)
			funct_quit(spar, get, argv, loop);

		else if (for_system(spar) == 0)
		{
			handle = ck_rn_sys(spar, handle);
			rn_fini(spar, get);
			continue;
		}
		else
			handle = rn_search(spar, get, loop, argv);

		rn_fini(spar, get);
	}
	return (current);
}
