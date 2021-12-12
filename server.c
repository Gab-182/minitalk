#include "minitalk.h"

int server()
{
    int pid;
    sigset_t sigset;

    pid = getpid();

    if (pid == -1)
        perror("Server failed to get an ID");
    if (pid == 0)
    {
        // child proccess.
        usleep(100);
        sigemptyset(&sigset);
        printf("The server is letting client know he's ready for signal");
        kill(getpid(), SIGUSR1);
    }

    else
    {
        // Parent proccess.
        printf("The server PID is %d\n", pid);
        client(pid);
    }
    return (0);
}