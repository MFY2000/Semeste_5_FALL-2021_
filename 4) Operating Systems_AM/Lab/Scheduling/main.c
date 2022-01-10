#include <stdio.h>
#include "FCFS.c"
#include "SJF.c"
#include "SJR.c"
#include "RR.c"
#include "Prority.c"
#include "Multi Level.c"

int getInput();

int getNumber(int max){
   return (rand() % (max - 1 + 1)) + 1; 
}

int main(){
  srand(time(0));
    
  int key, temp;

  while (1){
    system("cls");

    printf("All scheduling algorithms\n");

    printf("1 => FIRST COME FIRST SERVE [non pre-emptive]\n");
    printf("2 => SHORTEST Job First [non pre-emptive]\n");
    printf("3 => SHORTEST REMAINING TIME FIRST [pre-emptive]\n");
    printf("4 => ROUND robin [pre-emptive]\n");
    printf("5 => PRIORITY Scheduling\n");
    printf("6 => Multi Level Scheduling\n");
    printf("0 => Exit\n");

    printf("Enter your choice :  ");
    key = getInput();
    switch (key){
    case 1:
      FCFS();
      break;

    case 2:
      SJF();
      break;

    case 3:
      SJR();
      break;

    case 4:
      RR();
      break;

    case 5:
      Prority();
      break;

    case 6:
      MM();
      break;

    default:
      return 0;
      break;
    }

    printf("\n\n");
    getch();
  }
}

int getInput(){
  int choice;

  do{
    scanf("%d", &choice);
  } while (choice < 1 || choice > 7);

  return choice;
}
