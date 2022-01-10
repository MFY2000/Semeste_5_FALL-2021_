#include <stdio.h>
#include "FCFS.c"
#include "SJF.c"
// #include "FCFS.c"
// #include "/FCFS.c"


int getInput();

int main(){
  /* code */
  int key, temp;

  while (1)
  {
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
      getch();
      break;

    case 2:
      SJF();
      getch();
      break;

    case 3:
      // SJR();
      getch();
      break;

    case 4:
      // RR();
      getch();
      break;

    case 5:
      // Prority();
      getch();
      break;

    case 6:
      // Multi();
      getch();
      break;

    default:
      return 0;
      break;
    }

    printf("\n\n\n\n\n\n");
  }
}

int getInput()
{
  int choice;

  do
  {
    scanf("%d", &choice);
  } while (choice < 1 || choice > 7);

  return choice;
}

// void findWaitingTime(int processes[], int n,
//                      int bt[], int wt[])
// {
//   // waiting time for first process is 0
//   wt[0] = 0;

//   // calculating waiting time
//   for (int i = 1; i < n; i++)
//     wt[i] = bt[i - 1] + wt[i - 1];
// }

// // Function to calculate turn around time
// void findTurnAroundTime(int processes[], int n,
//                         int bt[], int wt[], int tat[])
// {
//   // calculating turnaround time by adding
//   // bt[i] + wt[i]
//   for (int i = 0; i < n; i++)
//     tat[i] = bt[i] + wt[i];
// }

// //Function to calculate average time
// void findavgTime(int processes[], int n, int bt[])
// {
//   int wt[n], tat[n], total_wt = 0, total_tat = 0;

//   findWaitingTime(processes, n, bt, wt);
//   findTurnAroundTime(processes, n, bt, wt, tat);
//   printf("Processes Burst time Waiting time Turn around time\n");
//   for (int i = 0; i < n; i++)
//   {
//     total_wt = total_wt + wt[i];
//     total_tat = total_tat + tat[i];
//     printf(" %d ", (i + 1));
//     printf("	 %d ", bt[i]);
//     printf("	 %d", wt[i]);
//     printf("	 %d\n", tat[i]);
//   }
//   int s = (float)total_wt / (float)n;
//   int t = (float)total_tat / (float)n;
//   printf("Average waiting time = %d", s);
//   printf("\n");
//   printf("Average turn around time = %d ", t);
// }

// // Driver code
// void FCFS()
// {
//   //process id's
//   int processes[] = {1, 2, 3};
//   int n = sizeof processes / sizeof processes[0];

//   //Burst time of all processes
//   int burst_time[] = {10, 5, 8};

//   findavgTime(processes, n, burst_time);
// }

// void SJF()
// {
//   int bt[20], p[20], wt[20], tat[20], i, j, n, total = 0, pos, temp;
//   float avg_wt, avg_tat;
//   printf("Enter number of process:");
//   scanf("%d", &n);

//   printf("nEnter Burst Time:n");
//   for (i = 0; i < n; i++)
//   {
//     printf("p%d:", i + 1);
//     scanf("%d", &bt[i]);
//     p[i] = i + 1;
//   }

//   //sorting of burst times
//   for (i = 0; i < n; i++)
//   {
//     pos = i;
//     for (j = i + 1; j < n; j++)
//     {
//       if (bt[j] < bt[pos])
//         pos = j;
//     }

//     temp = bt[i];
//     bt[i] = bt[pos];
//     bt[pos] = temp;

//     temp = p[i];
//     p[i] = p[pos];
//     p[pos] = temp;
//   }

//   wt[0] = 0;

//   for (i = 1; i < n; i++)
//   {
//     wt[i] = 0;
//     for (j = 0; j < i; j++)
//       wt[i] += bt[j];

//     total += wt[i];
//   }

//   avg_wt = (float)total / n;
//   total = 0;

//   printf("nProcesst    Burst Time    tWaiting TimetTurnaround Time");
//   for (i = 0; i < n; i++)
//   {
//     tat[i] = bt[i] + wt[i];
//     total += tat[i];
//     printf("\np%d\t\t  %d\t\t    %d\t\t\t%d", p[i], bt[i], wt[i], tat[i]);
//   }

//   avg_tat = (float)total / n;
//   printf("\n\nAverage Waiting Time=%f", avg_wt);
//   printf("\nAverage Turnaround Time=%f\n", avg_tat);
// }

// void SJR(){
// int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
//     float avg_wt,avg_tat;
//     printf("Enter number of process:");
//     scanf("%d",&n);
  
//     printf("\nEnter Burst Time:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("p%d:",i+1);
//         scanf("%d",&bt[i]);
//         p[i]=i+1;         
//     }
  
//    //sorting of burst times
//     for(i=0;i<n;i++)
//     {
//         pos=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(bt[j]<bt[pos])
//                 pos=j;
//         }
  
//         temp=bt[i];
//         bt[i]=bt[pos];
//         bt[pos]=temp;
  
//         temp=p[i];
//         p[i]=p[pos];
//         p[pos]=temp;
//     }
   
//     wt[0]=0;            
  
   
//     for(i=1;i<n;i++)
//     {
//         wt[i]=0;
//         for(j=0;j<i;j++)
//             wt[i]+=bt[j];
  
//         total+=wt[i];
//     }
  
//     avg_wt=(float)total/n;      
//     total=0;
  
//     printf("\nProcesst    Burst Time    Waiting TimetTurnaround Time");
//     for(i=0;i<n;i++)
//     {
//         tat[i]=bt[i]+wt[i];   
//         total+=tat[i];
//         printf("\np%d  \t\t%d    \t\t%d  \t\t%d",p[i],bt[i],wt[i],tat[i]);
//     }
  
//     avg_tat=(float)total/n;    
//     printf("\nAverage Waiting Time=%f",avg_wt);
//     printf("\nAverage Turnaround Time=%f\n",avg_tat);
// }

// void RR()
// {
//   int count, j, n, time, remain, flag = 0, time_quantum;
//   int wait_time = 0, turnaround_time = 0, at[10], bt[10], rt[10];
//   printf("Enter Total Process:\t ");
//   scanf("%d", &n);
//   remain = n;
//   for (count = 0; count < n; count++)
//   {
//     printf("Enter Arrival Time and Burst Time for Process Process Number %d :", count + 1);
//     scanf("%d", &at[count]);
//     scanf("%d", &bt[count]);
//     rt[count] = bt[count];
//   }
//   printf("Enter Time Quantum:\t");
//   scanf("%d", &time_quantum);
//   printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
//   for (time = 0, count = 0; remain != 0;)
//   {
//     if (rt[count] <= time_quantum && rt[count] > 0)
//     {
//       time += rt[count];
//       rt[count] = 0;
//       flag = 1;
//     }
//     else if (rt[count] > 0)
//     {
//       rt[count] -= time_quantum;
//       time += time_quantum;
//     }
//     if (rt[count] == 0 && flag == 1)
//     {
//       remain--;
//       printf("P[%d]\t|\t%d\t|\t%d\n", count + 1, time - at[count], time - at[count] - bt[count]);
//       wait_time += time - at[count] - bt[count];
//       turnaround_time += time - at[count];
//       flag = 0;
//     }
//     if (count == n - 1)
//       count = 0;
//     else if (at[count + 1] <= time)
//       count++;
//     else
//       count = 0;
//   }
//   printf("\nAverage Waiting Time= %f\n", wait_time * 1.0 / n);
//   printf("Avg Turnaround Time = %f", turnaround_time * 1.0 / n);
// }

// void Prority()
// {
//   int bt[20], p[20], wt[20], tat[20], pr[20], i, j, n, total = 0, pos, temp, avg_wt, avg_tat;
//   printf("Enter Total Number of Process:");
//   scanf("%d", &n);

//   printf("\nEnter Burst Time and Priority\n");
//   for (i = 0; i < n; i++)
//   {
//     printf("\nP[%d]\n", i + 1);
//     printf("Burst Time:");
//     scanf("%d", &bt[i]);
//     printf("Priority:");
//     scanf("%d", &pr[i]);
//     p[i] = i + 1; //contains process number
//   }

//   //sorting burst time, priority and process number in ascending order using selection sort
//   for (i = 0; i < n; i++)
//   {
//     pos = i;
//     for (j = i + 1; j < n; j++)
//     {
//       if (pr[j] < pr[pos])
//         pos = j;
//     }

//     temp = pr[i];
//     pr[i] = pr[pos];
//     pr[pos] = temp;

//     temp = bt[i];
//     bt[i] = bt[pos];
//     bt[pos] = temp;

//     temp = p[i];
//     p[i] = p[pos];
//     p[pos] = temp;
//   }

//   wt[0] = 0; //waiting time for first process is zero

//   //calculate waiting time
//   for (i = 1; i < n; i++)
//   {
//     wt[i] = 0;
//     for (j = 0; j < i; j++)
//       wt[i] += bt[j];

//     total += wt[i];
//   }

//   avg_wt = total / n; //average waiting time
//   total = 0;

//   printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
//   for (i = 0; i < n; i++)
//   {
//     tat[i] = bt[i] + wt[i]; //calculate turnaround time
//     total += tat[i];
//     printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d", p[i], bt[i], wt[i], tat[i]);
//   }

//   avg_tat = total / n; //average turnaround time
//   printf("\n\nAverage Waiting Time=%d", avg_wt);
//   printf("\nAverage Turnaround Time=%d\n", avg_tat);
// }

// void Multi()
// {
//   int p[20], bt[20], su[20], wt[20], tat[20], i, k, n, temp;
//   float wtavg, tatavg;
//   printf("Enter the number of processes:");
//   scanf("%d", &n);
//   for (i = 0; i < n; i++)
//   {
//     p[i] = i;
//     printf("Enter the Burst Time of Process%d:", i);
//     scanf("%d", &bt[i]);
//     printf("System/User Process (0/1) ? ");
//     scanf("%d", &su[i]);
//   }
//   for (i = 0; i < n; i++)
//     for (k = i + 1; k < n; k++)
//       if (su[i] > su[k])
//       {
//         temp = p[i];
//         p[i] = p[k];
//         p[k] = temp;
//         temp = bt[i];
//         bt[i] = bt[k];
//         bt[k] = temp;
//         temp = su[i];
//         su[i] = su[k];
//         su[k] = temp;
//       }
//   wtavg = wt[0] = 0;
//   tatavg = tat[0] = bt[0];
//   for (i = 1; i < n; i++)
//   {
//     wt[i] = wt[i - 1] + bt[i - 1];
//     tat[i] = tat[i - 1] + bt[i];
//     wtavg = wtavg + wt[i];
//     tatavg = tatavg + tat[i];
//   }
//   printf("\nPROCESS\t\t SYSTEM/USER PROCESS \tBURST TIME\tWAITING TIME\tTURNAROUND TIME");
//   for (i = 0; i < n; i++)
//     printf("\n%d \t\t %d \t\t %d \t\t %d \t\t %d ", p[i], su[i], bt[i], wt[i], tat[i]);
//   printf("\nAverage Waiting Time is --- %f", wtavg / n);
//   printf("\nAverage Turnaround Time is --- %f", tatavg / n);
// }
