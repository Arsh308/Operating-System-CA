#include<stdio.h>
 typedef struct 
{
	int processID;
	int burstTime;
	int arrivalTime;
}Process;
void Que1();
void Que2();
void findWaitingTime(Process proc[], int m,int wt[]) 
{ 
    int rt[m]; 
    for (int i = 0; i < m; i++) 
        rt[i] = proc[i].burstTime; 
  
    int complete = 0, t = 0, minm = 100000; 
    int shortest = 0, finish_time,j; 
    bool check = false; 
  
    // Process until all processes gets 
    // completed 
    while (complete != m) { 
  
        // Find process with minimum 
        // remainingg time among the 
        // processes that arrives till the 
        // current time
        for ( j = 0; j < m; j++) { 
            if ((proc[j].arrivalTime <= t) && 
            (rt[j] < minm) && rt[j] > 0) { 
                minm = rt[j]; 
                shortest = j; 
                check = true; 
            } 
        } 
  
  
