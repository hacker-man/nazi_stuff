#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "minishell_input.h"
#include "free_args.h"
#include "include/internals.h"

int main(int argc, char *argv[])
{
	char buf[BUFSIZ];
	_Bool shell_alive;

	shell_alive = true;

	do{
		print_prompt();
		read_command_line(buf);

		if(strcmp(buf, "exit") == 0)
		{
			shell_alive = false;
		}else if(is_internal_command(buf)){
			execute_internal_command(buf);
		}else{
			printf("Must be a external one ...\n");
		}

	}while(shell_alive);

	return 0;
}
