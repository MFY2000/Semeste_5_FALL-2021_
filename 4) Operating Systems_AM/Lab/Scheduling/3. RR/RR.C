#include<stdio.h>  
#include<conio.h>
#include <time.h>
#include <stdlib.h>

int getNumber(int max){
   return (rand() % (max - 1 + 1)) + 1; 
}

int main(){
    srand(time(0));
    
    int i, NOP, sum=0,count=0, y, quant, wt=0, tat=0;
    
    float avg_wt, avg_tat;  
    printf("Total number of process in the system: ");  
    y = NOP = getNumber(8);  
    printf("%d \n",y);
    
    int at[y], bt[y], temp[y];
    
    
    
    for(i=0; i<NOP; i++){  
        at[i] = getNumber(3);
        bt[i] = getNumber(6);
        temp[i] = bt[i];  
    }  
    
    printf("Enter the Time Quantum for the process: \t");  
    scanf("%d", &quant);  
    
    printf("\n| Process No | Arrial Time | Burst Time |\t TAT \t|  Waiting Time |");  
    
    for(sum=0, i = 0; y!=0; ){  
        if(temp[i] <= quant && temp[i] > 0){  
        sum = sum + temp[i];  
        temp[i] = 0;  
        count=1;  
        }     
        else if(temp[i] > 0){  
            temp[i] = temp[i] - quant;  
            sum = sum + quant;    
        }  
        if(temp[i]==0 && count==1){  
            y--;
            printf("\n|      %d     |      %d      |      %d     |\t%d\t|\t%d\t|", (i+1),at[i], bt[i], sum-at[i], (bt[i]-sum-at[i]));  
            wt = wt+sum-at[i]-bt[i];  
            tat = tat+sum-at[i];  
            count =0;     
        }  
        if(i==NOP-1){  
            i=0;  
        }  
        else if(at[i+1]<=sum){  
            i++;  
        }  
        else{  
            i=0;  
        }  
    }  

    avg_wt = wt * 1.0/NOP;  
    avg_tat = tat * 1.0/NOP;  
    printf("\n\nAverage Turn Around Time: \t%f", avg_wt);  
    printf("\nAverage Waiting Time: \t%f", avg_tat);  
    getch();  
}  