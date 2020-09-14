/* Check whether a given graph is connected or not using DFS method.*/

#include<iostream>
using namespace std;
int a[20][20],n,visited[20],s[20],top=-1,c=1,flag=0;
void dfs(int v)
{
	visited[v]=1;
	s[++top]=v;
	
	for(int i=1;i<=n;i++)
	{
		if(a[v][i]==1 && !visited[i])
		{
			flag=1;
			c++;
			//cout<<i<<" ";
			dfs(i);
		}
		
	}
	if(flag==0)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[s[top]][j]==1 && !visited[j])
			{
				flag==1;
				c++;
				//cout<<j<<" ";
				dfs(j);
			}
			
		}
		if(flag==0)
			top--;
	}
	

}

int main()
{
	int v;
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}

	for(int i=1;i<=n;i++)
		visited[i]=0;
	
	
	dfs(1);
	
	if(c==n)
		cout<<"Connected graph"<<endl;
	else
		cout<<"Graph is not connected"<<endl;
	

	return 0;
}

/* output
Enter the no of vertices
4
Enter the adjacency matrix
0 1 0 0
0 0 1 0
0 0 0 1
0 1 0 0
Connected graph
*/
