/* Given an array of 0s and 1s, If any particular index i has value 1 then it is a safe index and if the value is 0 then it 
is an unsafe index. A man is standing at index -1(source) can only land on a safe index and he has to reach the Nth index 
(last position). At each jump, the man can only travel a distance equal to any Fibonacci Number. You have to minimize the
number of steps, provided man can jump only in forward direction.*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int first = 0, second = 1, third = 1;
    	if (n == 1) 
		return first;
    	else if (n == 2) 
		return second;
    	else if (n == 3) 
		return third;
    	else 
	{
        	for (int i = 4; i <= n; ++i) 
		{
            		first = second;
            		second = third;
            		third = first + second;
        	}
        return third;
	}
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	a[n]=1;
	vector<int> fibser;
    	for (int i = 1; i <= n; ++i) 
		fibser.push_back(fib(i));
	vector<int> jumps(n + 1, n);
	for(int i=0;i<=n;i++)
	{
		if(a[i]==1)
		{
			for(int j=1;j<=n;j++)
			{
				if(i-fibser[j]==-1)
					jumps[i]=1;
				else if (i - fibser[j] > -1)
					jumps[i] = min(jumps[i], jumps[i - fibser[j]] + 1);
			}
		}
	}
	cout<<"Mininum jumps : "<<jumps[n]<<endl;
	return 0;
}

/* output
1.Enter the size of the array
9
Enter the array elements
0 0 1 0 0 0 1 1 0
Mininum jumps : 2

2.Enter the size of the array
11
Enter the array elements
0 0 0 1 1 0 1 0 0 0 0
Mininum jumps : 3
*/
			
