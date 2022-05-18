#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n,TotalHeadMoment=0,initial;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&RQ[i]);
    scanf("%d",&initial);
    
    // logic for FCFS disk scheduling
    
    for(i=0;i<n;i++)
    {
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }
    
    printf("Total head moment is %d",TotalHeadMoment);
    return 0;
    
}


// question 
