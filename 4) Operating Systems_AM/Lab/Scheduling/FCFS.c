#include<stdio.h>  
#include<conio.h>
#include <time.h>
#include <stdlib.h>



void findWaitingTime(int processes[], int n, 
                          int bt[], int wt[]){
    wt[0] = 0;   
    for (int  i = 1; i < n ; i++ )
        wt[i] =  bt[i-1] + wt[i-1] ;
}
   
void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[]){
    for (int  i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}
   
void findavgTime( int processes[], int n, int bt[]){
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    
    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);
   
    printf("Processes   Burst time   Waiting time   Turn around time\n");
    for (int  i=0; i<n; i++){
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        
        printf("   %d\t\t%d\t\t%d\t\t%d\n",processes[i], bt[i] ,wt[i] ,tat[i] );
    }
    int s=(float)total_wt / (float)n;
    int t=(float)total_tat / (float)n;
    
    printf("\n\nAverage waiting time. \t (%d / %d) = %d",total_wt, n, s);
    printf("\nAverage turn around time. (%d / %d) = %d",total_tat, n,t);
}
   
int FCFS(){
    int n = getNumber(15);

    int processes[n], burst_time[n];

    for(int i = 0; i < n; i++){
        processes[i] = i;
        burst_time[i] = getNumber(10);
    }

    printf("\n\n\t\tFirst Come First Serve\n");
    

    findavgTime(processes, n,  burst_time);
    return 0;
}