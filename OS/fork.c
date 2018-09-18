#include <stdio.h>
#include <unistd.h>

int main() {
	printf("Before the fork!\n");

	pid_t pid = fork();

	printf("Processes checking in!\n");

	if(pid == 0) {
		printf("Hello, am child.\n");
	}
	else {
		printf("Hello, am parent, child's pid is %d.\n", pid);
	}

	return 0;
}
