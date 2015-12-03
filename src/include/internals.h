#ifndef NAZI_STUFF_INCLUDE_INTERNALS_h
	#define NAZI_STUFF_INCLUDE_INTERNALS_h
#else
	#error "internals.h reincluded"
#endif

int is_internal_command(const char *);
void execute_internal_command(const char *);
