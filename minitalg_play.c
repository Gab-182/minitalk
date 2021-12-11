#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>


/**
 * Note:
 * The fork() creates a copy of the process that was executing.
 * The fork() is called once but returns twice (once in the parent and once in the child).
 * The line PID = fork(); returns the value of the fork() system call. 
 * 
 *** if (PID == 0) evaluates the return value. 
 * If PID is equal to zero then printf() is executed in the child process only, not in the parent process.
 *** The else part of the condition is executed in the parent process and the child process but 
 * only the parent process will execute the else part of the condition.
*/

// Global variable to make the handle function not excute if
// the answer is there during the sleep time.
int n;

void handle_sigusr1(int sig)
{
	if (n == 0)
		printf("Hint/try calculature -_-\n");
}

int main(int argc, char **argv)
{
	int pid;
	pid = fork();
	if (pid == -1)
		return (1);
	if (pid == 0)
	{
		/* Child process*/
		sleep(5);
		kill(getppid(), SIGUSR1); // getppid --> to get th parent procces id.
		// SIGUSR1 ---> 
	}
	else
	{
		struct sigaction sa = { 0 }; // make sure all the members of the struct has been inisilised to 0.
		sa.sa_flags = SA_RESTART; // just cause we used scanf().for errors.
		sa.sa_handler = &handle_sigusr1; // handler that point to the function handle_sigusr1().
		sigaction(SIGUSR1, &sa, NULL);
		// SIGUSR1 	 --> specifies the signal.
		// &sa 		---> reference to our segaction struct.
		// NULL		---> cause we don't have old segaction.

		/* Parent proccess.*/
		printf("what is 4 * 3?\n");
		scanf("%d", &n);

		if (n == 12)
			printf("correct!\n");
		else
			printf("wrong!\n");
		wait(NULL);// To wait until there is an action performed.
	}
	return (0);
}