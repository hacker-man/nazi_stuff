#ifndef NAZI_STUFF_MINISHELL_INPUT_h
	#define NAZI_STUFF_MINISHELL_INPUT_h
#else
	#error "mishell_input.h reincluded"
#endif

void print_prompt();
void read_command_line(char *buf);
