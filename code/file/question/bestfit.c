#include<stdio.h> 
int main(){ 
    int a[20],p[20],i,j,n,m;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
        scanf("%d",&m);
    for(i=0;i<m;i++){                       
        scanf("%d",&p[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(p[j]<=a[i]){
                printf("The Process %d allocated to %d\n",j,a[i]);
                p[j]=10000;
            break;

            }
        }
    }
    
    for(j=0;j<m;j++){
        if(p[j]!=10000){
            printf("The Process %d is not allocated\n",j);
        }
    }
}