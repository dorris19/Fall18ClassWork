#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv) {
	//an array of strings which will be passed to execvp()
	char *child_argv[64];

	// we want to execute "cat exec.c"
	child_argv[0] = "cat";
	child_argv[1] = "exec.c";
	//the element after the last argument must be NULL
	child_argv[2] = NULL;

	pid_t pid = fork();
	// if we are the child
	if(pid == 0) {
		// execvp()'s first argument is the name of the program to run,
		// the second is the full array of arguments that will be passed to main()
		execvp(child_argv[0], child_argv);
		if(execvp(child_argv[0], child_argv) == -1) {
			//if we get here, there was an error running execvp(). if
			//everything went okay, the code in this file will no longer
			//be running, because the child is executing the program
			// in child_argv[0]
			printf("There was an error running %s\n", child_argv[0]);
			return 1;
		}
	}
	//if we are the parent
	else {
		int status;
		//waitpid() blocks until the process with the given pid exits. status
		// is set via pointer by waitpid()
		waitpid(pid, &status, 0);
		//to extract the exit code from the status, we use WEXITSTATUS(status)
		printf("The child exited with a status of %d\n", WEXITSTATUS(status));
}
	return 0;
}
