#include<stdio.h>  
#include<conio.h>
#include <time.h>
#include <stdlib.h>


int getNumberRandom(int max, int min){
   return (rand() % (max - min + 1)) + min; 
}
 
int MM(){
	int i, k, n, temp;
	float wtavg, tatavg;
	char *temp2;
	
	n = getNumberRandom(10, 1);
	printf("Enter the number of processes: %d\n",n);
	
	int p[n],bt[n], su[n], wt[n],tat[n];
	
	for(i=0;i<n;i++){
		p[i] = i;
		bt[i] = getNumberRandom(10,1);
		su[i] = getNumberRandom(1, 0);
	}
	for(i=0;i<n;i++)
		for(k=i+1;k<n;k++)
			if(su[i] > su[k]){
			temp=p[i];
			p[i]=p[k];
			p[k]=temp;
			
            temp=bt[i];
			bt[i]=bt[k];
			bt[k]=temp;

			temp=su[i];
			su[i]=su[k];
			su[k]=temp;
			    
			}
			
	wtavg = wt[0] = 0;
	tatavg = tat[0] = bt[0];
	for(i=1;i<n;i++){
		wt[i] = wt[i-1] + bt[i-1];
		tat[i] = tat[i-1] + bt[i];
		wtavg = wtavg + wt[i];
		tatavg = tatavg + tat[i];
	}

	printf("\n| PROCESS NO | SYSTEM/USER | BURST TIME |\tTAT\t|  Waiting Time |");
	
    for(i=0;i<n;i++){
        
        if(su[i] == 0){
            temp2 = "  SYSTEM(0)  ";
        }else{
            temp2 = "   USER(1)   ";
        }
    	printf("\n|      %d     |%s|      %d     |\t%d\t|\t%d\t|",p[i],temp2,bt[i],tat[i],wt[i]);
    }

		
	printf("\nAverage Waiting Time is --- %f",wtavg/n);
	printf("\nAverage Turnaround Time is --- %f",tatavg/n);
	return 0;
}
