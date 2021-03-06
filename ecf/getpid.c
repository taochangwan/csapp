#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void) {
    pid_t pid;

    pid = getpid();
    printf("cur pid: %d", pid);

    putchar('\n');

    pid = getppid();
    printf("parent pid: %d", pid);

    return 0;
}
