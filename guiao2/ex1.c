#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

    pid_t pid = getpid();
    pid_t ppid = getppid();
    printf("The PID is %d.\nThe PPID is %d.\n",(int)pid,(int)ppid);
    return 0;
}