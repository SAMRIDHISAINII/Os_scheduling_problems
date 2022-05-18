#include <bits/stdc++.h>
using namespace std;

void calculatedifference(int request[], int head,
                         int diff[][2], int n)
{
    for(int i = 0; i < n; i++)
    {
        diff[i][0] = abs(head - request[i]);
    }
}
void myFunction() {
  
}
void FCFS(int arr[], int head,int size)
{
    int seek_count = 0;
    int distance, cur_track;
 
    for (int i = 0; i < size; i++) {
        cur_track = arr[i];
 

        distance = abs(cur_track - head);

        seek_count += distance;
 

        head = cur_track;

    }
            
            cout << "Total head movement is "
             << seek_count << endl;
        
    
 

} 
void myFunction23() {
  // code to be executed
}
      
int findMIN(int diff[][2], int n)
{
    int index = -1;
    int minimum = 1e9;
   
    for(int i = 0; i < n; i++)
    {
        if (!diff[i][1] && minimum > diff[i][0])
        {
            minimum = diff[i][0];
            index = i;
        }
    }
    return index;
}
 void myFunction1() {
  // code to be executed
 }
struct {           
  int myNum;        
  string myString;  
} myStructure;       
void shortestSeekTimeFirst(int request[],
                           int head, int n)
{
    if (n == 0)
    {
        return;
    }

    int diff[n][2] = { { 0, 0 } };
     

    int seekcount = 0;
     
  
    int seeksequence[n + 1] = {0};
     
    for(int i = 0; i < n; i++)
    {
        seeksequence[i] = head;
        calculatedifference(request, head, diff, n);
        int index = findMIN(diff, n);
        diff[index][1] = 1;
         
  
        seekcount += diff[index][0];
         
   
        head = request[index];
    }
    seeksequence[n] = head;
    if(seekcount<199){
           cout << "Total head movement is "
         << seekcount << endl; 
    }
    else{
        cout<<"Disk range out of bound!!";
    }
    
     

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        FCFS(arr,50,n);
    }
    else{
        shortestSeekTimeFirst(arr, 50, n);
    }
     
    
     
    return 0;
}
