#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void writer(const char* message,int count,FILE* stream)
{
    for(;count>0;--count){
        fprintf(stream,"%s\n",message);
        fflush(stream);
        sleep(1);
    }
}

void reader(FILE* stream)
{
    char buffer[1024];
    while(!feof(stream) && !ferror(stream) && fgets(buffer,sizeof(buffer),stream)!=NULL)
        fputs(buffer,stdout);

    printf("%s\n", buffer);
}

int main()
{
    int fds[2];
    pid_t pid;

    int read_fd;
    int write_fd;
    pipe(fds);

    read_fd = pipe(fds[0]);
    write_fd = pipe(fds[1]);

    pid = fork();
    if( pid == 0){

        close(fds[1]);

        FILE *stream;
        stream = fdopen(fds[0], "r");

        //char *str = "hello";
        reader(stream); 
        close(fds);
        exit(0);
    }
    else{

        FILE *stream;
        stream = fdopen(fds[1], "w");

        writer("hello",5,stream);
        close(fds);
        return 0;
    }
    
   
    return 0;
}