#include <stdio.h>


void SJF(){

  printf("\n\n\t\tShortest Job First\n");

  int n = getNumber(10),
      bt[n], p[n], wt[n], tat[n], total = 0,
      // loop varaibles
      i, j, pos, temp;

  float avg_wt, avg_tat;

  for (int i = 0; i < n; i++){
    p[i] = i;
    bt[i] = getNumber(15);
  }


  //sorting burst time in ascending order using selection sort
  for (i = 0; i < n; i++)
  {
    pos = i;
    for (j = i + 1; j < n; j++)
    {
      if (bt[j] < bt[pos])
        pos = j;
    }

    temp = bt[i];
    bt[i] = bt[pos];
    bt[pos] = temp;

    temp = p[i];
    p[i] = p[pos];
    p[pos] = temp;
  }

  wt[0] = 0;

  //calculate waiting time
  for (i = 1; i < n; i++)
  {
    wt[i] = 0;
    for (j = 0; j < i; j++)
      wt[i] += bt[j];

    total += wt[i];
  }

  avg_wt = (float)total / n;
  int total_wt = total;
  total = 0;

  printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
  for (i = 0; i < n; i++)
  {
    tat[i] = bt[i] + wt[i];
    total += tat[i];
    printf("\np%d\t\t  %d\t\t    %d\t\t\t%d", p[i], bt[i], wt[i], tat[i]);
  }

  avg_tat = (float)total / n;

  printf("\n\nAverage waiting time.  \t  (%d / %d) = %f", total_wt, n, avg_wt);
  printf("\nAverage turn around time. (%d / %d) = %f", total, n, avg_tat);
}