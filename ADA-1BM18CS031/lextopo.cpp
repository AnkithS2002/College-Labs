/*Given a directed graph with N vertices and M edges that may contain cycles, the task is to find the lexicographically smallest topological ordering of the graph if it exists otherwise print -1 (if the graph has cycles).
Lexigraphically smallest topological ordering means that if two vertices in a graph do not have any incoming edge then the vertex with the smaller number should appear first in the ordering.*/

#include <bits/stdc++.h> 
using namespace std;
stack<int> s;
int n,a[30][30],q[30],f=0,r=-1;
void lextopo()
{
	vector<int> indeg(n,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
				indeg[j]++;
		}
			
	}
	
	for(int i=0;i<n;i++)
	{
		if(indeg[i]==0)
			q[++r]=i;
	}
	int c=0;
	vector<int> toporder;
	while(f<=r)
	{
		int min=q[f++];
		
		toporder.push_back(min);
		for(int i=0;i<n;i++)
		{
			if(a[min][i]==1)
			{
				indeg[i]--;
				if(indeg[i]==0)
					q[++r]=i;
			}
			
		}
		c++;
	}
	if(c!=n)
	{
		cout<<-1<<endl;
		return;
	}
	for(int i=0;i<toporder.size();i++)
		cout<<toporder[i]<<" ";
			
}

int main()
{
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<"lexicographically smallest topological ordering is"<<endl;
	lextopo();
	return 0;
}

/* output
Enter the no of vertices
6
Enter the adjacency matrix
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 1 0 0
0 1 0 0 0 0
1 1 0 0 0 0
1 0 1 0 0 0
lexicographically smallest topological ordering is
4 5 0 2 3 1 
*/


