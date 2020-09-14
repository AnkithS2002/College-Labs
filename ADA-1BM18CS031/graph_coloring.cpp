/* Write a program for the following: Given an undirected graph and a number m, determine if the graph can be colored with at most m 
colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment 
of colors to all vertices. */

#include<bits/stdc++.h>
using namespace std;

int V;
bool a[30][30];
bool isSafe (int v, bool a[][30], int color[], int c) 
{ 
    for (int i = 0; i < V; i++) 
        if (a[v][i] && c == color[i]) 
            return false; 
    return true; 
} 

void printSolution(int color[]) 
{ 
    cout<<"The assigned colors are: "<<endl;
    for (int i = 0; i < V; i++) 
      cout<<color[i]<<" ";
    cout<<endl; 
} 
  
bool graphColor(bool a[][30], int m, int color[], int v) 
{ 
    
    if (v == V) 
        return true; 
  
    
    for (int c = 1; c <= m; c++) 
    { 
        
        if (isSafe(v, a, color, c)) 
        { 
           color[v] = c; 
  
           if (graphColor(a, m, color, v+1) == true) 
             return true; 
  
           color[v] = 0; 
        } 
    } 
  
    return false; 
} 

int main()
{
	int m;
	
	cout<<"Enter the no.of colors: "; 
	cin>>m;
	cout<<"Enter the no.of vertices: "; 
	cin>>V;
	int color[V];
	cout<<"Enter the adjacency matrix:"<<endl;
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			cin>>a[i][j];
			
		}
	}

    	for (int i = 0; i < V; i++) 
       		color[i] = 0; 
  
    
    	if (graphColor(a, m, color, 0) == false) 
    	{ 
      		printf("Solution does not exist"); 
      
    	} 
  
   	else
    		printSolution(color); 
    	return 0;
} 

/* output
Enter the no.of colors: 3
Enter the no.of vertices: 4
Enter the adjacency matrix:
0 1 1 1
1 0 1 0
1 1 0 1
1 0 1 0
The assigned colors are: 
1 2 3 2 
*/
  
