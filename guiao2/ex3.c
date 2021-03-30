#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    pid_t temp;
    int status;

    for(int i = 1; i <= 10; i++){
        if((temp = fork()) == 0){
            printf("[Child #%d] pid: %d\n", i, getpid());
            printf("[Child #%d] ppid: %d\n", i, getppid());
            _exit(i);
        } else {
            wait(&status);
            printf("[Parent] pid: %d || [Child #%d] ExitCode: %d\n", getpid(), i, WEXITSTATUS(status));
        }
    }


}