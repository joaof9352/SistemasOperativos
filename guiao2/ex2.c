#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    pid_t child_pid;
    if((child_pid = fork()) == 0){
        printf("[Child] Child pid: %d\n",getpid());
        printf("[Child] Parent pid: %d\n",getppid());
        _exit(0);
    }else{
        printf("[Parent] own pid: %d\n",getpid());
        printf("[Parent] Parent pid: %d\n",getppid());
        printf("[Parent] Child pid: %d\n",child_pid);
    
        int status;
        int terminated_pid = wait(&status);
        printf("[Parent] Child pid: %d, exit status: %d\n", terminated_pid, WEXITSTATUS(status));
    }

    printf("Exited %d\n",getpid());
    return 0;
    
}