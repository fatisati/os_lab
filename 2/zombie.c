#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <string.h>
#include <unistd.h>

int main(){



pid_t childPid;  // the child process that the execution will soon run inside of. 
childPid = fork();

if(childPid == 0)  // fork succeeded 
{   
   // Do something  
   printf("%s\n", "child created"); 
   exit(0); 
}

else if(childPid < 0)  // fork failed 
{    
   // log the error
}

else  // Main (parent) process after fork succeeds 
{    
    int returnStatus;   
    printf("%s\n", "father terminated");
    sleep(60);
    //waitpid(childPid, &returnStatus, 0);  // Parent process waits here for child to terminate.

    // if (returnStatus == 0)  // Verify child process terminated without error.  
    // {
    //    printf("The child process terminated normally.");    
    // }

    // if (returnStatus == 1)      
    // {
    //    printf("The child process terminated with an error!.");    
    // }
}
}