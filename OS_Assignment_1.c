#include <stdio.h>
#include <unistd.h>

int main()
{

    int i = fork();
    if (i == 0)
    {
        printf("I am Child\n");
        printf("Child PID = %d , Child PPID = %d\n", getpid(), getppid());
    }
    else
    {
        wait(NULL);
        printf("I am Parent\n");
        printf("Parent Pid = %d\n", getpid());
    }
    return 0;
}