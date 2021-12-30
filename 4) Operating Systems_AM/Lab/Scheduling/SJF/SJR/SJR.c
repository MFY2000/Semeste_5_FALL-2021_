#include <stdio.h>
struct process
{

  int WT, AT, BT, TAT;
};

struct process a[10] = {};

int main(){
  printf("\n\n\t\tShortest Job Remaining\n");
  
  int n = 6, temp[10];
  int count = 0, t = 0, short_P;
  float total_WT = 0, total_TAT = 0, Avg_WT, Avg_TAT;

  int bt[] = {10, 5, 8, 7, 2, 1},
      p[] = {0, 0, 3, 4, 0, 6};

  printf("\n");

  for (int i = 0; i < n; i++){
    a[i].BT = bt[i];
    a[i].AT = p[i];
    temp[i] = a[i].BT;
  }

  a[9].BT = 10000; // temp for max
  for (t = 0; count != n; t++)

  {

    short_P = 9;

    for (int i = 0; i < n; i++){
      if (a[i].BT < a[short_P].BT && (a[i].AT <= t && a[i].BT > 0))
        short_P = i;
    }

    a[short_P].BT = a[short_P].BT - 1;

    // if any process is completed
    if (a[short_P].BT == 0){

      // one process complete
      count++;

      a[short_P].WT = t + 1 - a[short_P].AT - temp[short_P];

      a[short_P].TAT = t + 1 - a[short_P].AT;

      // total calculation
      total_WT = total_WT + a[short_P].WT;

      total_TAT = total_TAT + a[short_P].TAT;
    }
  }

  Avg_WT = total_WT / n;

  Avg_TAT = total_TAT / n;

  // printing of the answer
  printf("Id.\tAT.\tBT.\tWT.\tTAT.\n");

  for (int i = 0; i < n; i++){

    printf(" %d\t%d\t%d\t%d\t%d\n", (i + 1), a[i].AT,
           (a[i].TAT - a[i].WT), a[i].WT, a[i].TAT);
  }
  printf("Avg waiting time of the process is %f\n", Avg_WT);

  printf("Avg turn around time of the process %f\n", Avg_TAT);
}
