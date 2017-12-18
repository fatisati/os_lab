#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
int main() {
   char s[100] = "";
   
   int fd, fd1;
   fd = open("fifo1", O_WRONLY);
   fd1 = open("fifo2", O_RDONLY);
   
   
   while (1) {
      printf("your turn: ");
      scanf("%s", s);
      write(fd, s, strlen(s));
      char s1[1000] = "";
      read(fd1, s1, 1000);
      printf(":%s\n", s1);
   }
}