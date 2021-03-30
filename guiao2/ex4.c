#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    //Criação de processos
    for(int i = 1; i <= 10; i++){
        if(fork() == 0){
            printf("[Child #%d] pid: %d\n", i, getpid());
            printf("[Child #%d] ppid: %d\n", i, getppid());
            _exit(i);
        }
    }

    for(int i = 1; i <= 10; i++){
        int status;
        int terminated_pid = wait(&status);
        printf("[Parent] pid: %d with ExitCode: %d\n", terminated_pid, WEXITSTATUS(status));
    }

}