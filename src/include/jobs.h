#ifndef NAZI_STUFF_INCLUDE_JOBS_h
	#define NAZI_STUFF_INCLUDE_JOBS_h
#else
	#error "jobs.h reincluded"
#endif

#include <sys/types.h>
#include <stdio.h>

typedef struct job {

    pid_t pid;
    char name[BUFSIZ];
    int finished;

} job_t;

extern job_t * jobs_array;
extern int jobs_count;

void jobs_new(pid_t pid, const char * name);
void jobs_finished(pid_t pid);
void jobs_free_mem();
