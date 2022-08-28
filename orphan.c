#include <stdio.h>
#include <unistd.h>

int main()
{

    int i = fork();
    if (i == 0)
    {
        sleep(30);
        printf("I am Child\n");
        printf("Child PID = %d , Child PPID = %d\n", getpid(), getppid());
    }
    else
    {
        printf("I am Parent\n");
        printf("Parent Pid = %d\n", getpid());
    }
    return 0;
}

/*
The output of the following Program will be
I am Parent
Parent Pid = 2789
I am Child
Child PID = 2790 , Child PPID = 1
*/