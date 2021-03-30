#include <sys/types.h>
#include <unistd.h> /* chamadas ao sistema: defs e decls essenciais */
#include <fcntl.h> /* O_RDONLY, O_WRONLY, O_CREAT, O_* */
#include <errno.h>
#include <stdio.h>

/*int open(const char *path, int oflag [, mode]);
ssize_t read(int fildes, void *buf, size_t nbyte);
ssize_t write(int fildes, const void *buf, size_t nbyte);
off_t lseek(int fd, off_t offset, int whence);
int close(int fildes);
*/


//mycp src dest
int main(int argc, char *argv[]){
    int n;
    int f1, f2;
    char buffer[2048];

    while((n = read(0,&buffer,2048)) > 0)
        write(0,&buffer,n);

}