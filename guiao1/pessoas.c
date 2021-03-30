#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* chamadas ao sistema: defs e decls essenciais */
#include <fcntl.h> /* O_RDONLY, O_WRONLY, O_CREAT, O_* */
#include <errno.h>
#include <string.h>

typedef struct spessoa{
    char nome[128];
    int idade;
} Pessoa;

int main(int argc, char *argv[]){
    int fd = open("pessoas.bin", O_CREAT | O_TRUNC | O_RDWR, 0644);

    if(fd < 0){
        exit(1);
    }

    Pessoa person1 = {"Maria Mourinho", 55};

    write(fd,&person1,sizeof(Pessoa));

    return 0;
}