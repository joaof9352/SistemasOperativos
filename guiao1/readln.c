#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* chamadas ao sistema: defs e decls essenciais */
#include <fcntl.h> /* O_RDONLY, O_WRONLY, O_CREAT, O_* */
#include <errno.h>

ssize_t readline(int fd, char *line, size_t size){
    int n;
    n=read(fd,line,size);
    return n;
}

int main(){
    char buf[128];

    readln(0,&buf,128);
} 