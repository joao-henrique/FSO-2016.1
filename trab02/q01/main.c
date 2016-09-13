#define _POSIX_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void handler(int signal_number){
  printf("Son finished\n");
}

int main(void)
{
  //Create a son process
  int pid_son = fork();

  //Sucessfuly created son process
  if (pid_son == 0){
    sleep(5); //Wait 5 second
    kill(getppid(), SIGALRM);
  }
  else if (pid_son < 0)
    perror("Error on fork call");
  else{
    //The father proces
    printf("Waiting for the SIGALRM from my son!\n");
    signal(SIGALRM, handler);
    pause(); 
    printf("The SIGALRM arrived!\n");
  }

  return 0;
}
