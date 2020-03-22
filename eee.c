#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int count,i,j;
  int time_quantum,n;
  int time = 0;
  
printf("\nEnter Number of Processes =");
scanf("%d" ,&n);
printf("\nEnter Time Quantum =");
scanf("%d" ,&time_quantum);
  if(n <= 0 || time_quantum <= 0)
  {
      printf("Invalid data!");
      return 0;
  }
printf("The number of processes are set to: %d\nThe time quantum is set to:%d\n" , n,time_quantum);
int at[10],bt[10],rt[10],pq[10],pty[10],pty1[10],pflag[10],tat[10],wt[10];
  for(j=0;j<n;j++)
    {
        pq[j] = 0;
        pflag[j] = 0;
    }
    
  for(count=0;count<n;count++)
  {
      printf("\nEnter Detail for Process = %d",count+1);
	  printf("\nEnter Arrival time = ");
	  scanf("%d",&at[count]);
	  printf("Enter Burst time = ");
	  scanf("%d",&bt[count]);
      printf("Enter Priority = ");
	  scanf("%d",&pty[count]);
	  rt[count]=bt[count];
	  pty1[count]=pty[count];

      if(at[count] < 0 || bt[count] <= 0)
      {
          printf("Invalid Data!");
          return 0;
      }
 }
}
