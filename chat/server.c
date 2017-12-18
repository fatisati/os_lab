#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
int main() {
   
   char fcontent[100] = "";
   int fd, fd1, fd2;
   mkfifo("fifo1", 0600);
   mkfifo("fifo2", 0600);
   fd = open("fifo1", O_RDONLY);
   fd1 = open("fifo2", O_WRONLY);

   while(1){
      char fname[100] = "";
      read(fd, fname, 100);
      printf("%s\n", fname);
      printf("your turn: ");
      scanf("%s", fcontent);
      write(fd1, fcontent, strlen(fcontent));
   }
   
   // while (read(fd2, fcontent, 100) != 0) {
   //    printf("%s\n", fcontent);
   //    if (fd < 0)
   //       write(fd1, "file not exit", 14);
   //    else
   //       write(fd1, fcontent, strlen(fcontent));
   // }
   close(fd);
   close(fd1);
   close(fd2);
}