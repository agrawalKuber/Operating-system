#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

    pid_t child_pid = fork();

    if (child_pid > 0)
    {
        printf("This is Parent Process\n");
        sleep(10);
    }
    else
    {
        printf("This is a terminating child Process\n");
        exit(0);
    }
    return 0;
}

/*
The output of the following Program will be
This is Parent Process
This is a terminating child Process
*/