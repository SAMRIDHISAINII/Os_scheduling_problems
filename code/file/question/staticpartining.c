#include<iostream>
 using namespace std;
 int main()
{          int fragment[20],b[20],p[20],i,j,nb,np,temp,lowest=9999;
	static int barray[20],parray[20];
	
	cin>>nb;
	
	cin>>np;
	
	for(i=1;i<=nb;i++)
   { cout<<"Block "<<i<<":";
        cin>>b[i];
    }
	for(i=1;i<=np;i++)
    {
        cout<<"File "<<i<<":";
        cin>>p[i];
    }
	for(i=1;i<=np;i++)
	{	for(j=1;j<=nb;j++)
	{
	if(barray[j]!=1)
{
temp=b[j]-p[i];
	if(temp>=0)
		if(lowest>temp)
			{
			parray[i]=j;
			lowest=temp;
			}
		}
	}
		fragment[i]=lowest;
		barray[parray[i]]=1;
		lowest=10000;
	}
	cout<<"\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement";
	for(i=1;i<=np && parray[i]!=0;i++)
cout<<"\n"<<i<<"\t\t"<<p[i]<<"\t\t"<<parray[i]<<"\t\t"<<b[parray[i]]<<"\t\t"<<fragment[i];
cout<<"\n";
return 0;
}
