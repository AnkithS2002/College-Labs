/* Write a program for minimum coin changing problem using Greedy technique. */

#include<bits/stdc++.h>
using namespace std;
int coins[50];
int mincoin(int deno[],int n,int val)
{
	int c=0;
	for(int i=n-1;i>=0;i--)
	{
		while(val>=deno[i])
		{
			val-=deno[i];
			coins[c++]=deno[i];
		}
	}
	return c;
}

int main()
{
	int val;
	int deno[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(deno)/sizeof(deno[0]);
	cout<<"Enter the value for which minimal change is to be found"<<endl;
	cin>>val;
	int minc=mincoin(deno,n,val);
	cout<<"Total coins needed = "<<minc<<endl;
	cout<<"The coins needed for minimal change are : "<<endl;
	for(int i=0;i<minc;i++)
		cout<<coins[i]<<" ";
	cout<<endl;
	return 0;
}

/* output
1.Enter the value for which minimal change is to be found
34
Total coins needed = 4
The coins needed for minimal change are : 
20 10 2 2 

2.Enter the value for which minimal change is to be found
67
Total coins needed = 4
The coins needed for minimal change are : 
50 10 5 2 
*/
