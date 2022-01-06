#include<stdio.h>  
#include<conio.h>
#include <time.h>
#include <stdlib.h>


int getNumber(int max){
   return (rand() % (max - 1 + 1)) + 1; 
}
 
int main(){
    srand(time(0));
    int i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    
    n = getNumber(8);
    printf("Enter Total Number of Process: %d \n\n", n);
 
    int bt[n],p[n],wt[n],tat[n],pr[n];
 
    for(i=0;i<n;i++){
        bt[i] = getNumber(3);
        pr[i] = getNumber(6); 
        p[i]=i+1;
    }
 
    for(i=0;i<n;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;
 
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;
    total=0;
 
 
    printf("\n| Process No(Prority) | Burst Time |\tTAT \t|  Waiting Time |");
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\n|\t %d(%d)         |      %d     |\t%d\t|\t%d\t|",p[i],pr[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
 
return 0;
}