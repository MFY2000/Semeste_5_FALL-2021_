#include <stdio.h>
#include <unistd.h>

int main(){
  pid_t t;
  t = fork();
  if (t == 0){
    printf("Child having id %d\n", getpid());
  }
  else{
    sleep(15);
    printf("Parent having id %d\n", getpid());
  }
}