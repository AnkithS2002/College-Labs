//Print all the nodes reachable from a given starting node in a digraph using BFS method.

#include<iostream>
using namespace std;
int a[20][20],q[20],visited[20],r=-1,f=0,i,j,n; 
void bfs(int v); 
int main(){ 
    int v; 
       cout<<"\nEnter no. of vertices:"; 
       cin>>n; 
       for(i=1;i<=n;i++) 
        { 
         q[i]=0; 
         visited[i]=0; 
        } 
       cout<<"\nEnter Adjacency Matrix of the graph:"; 
         for(i=1;i<=n;i++){ 
            for(j=1;j<=n;j++){ 
              
              cin>>a[i][j]; 
              } 
            } 
         cout<<"\nEnter the node of ur Choice:"; 
         cin>>v; 
         bfs(v); 
         cout<<"\nAll the nodes reachable from "<<v<<"->"<<n<<" are:"; 
         for(i=1;i<=n;i++){ 
             if(visited[i]) 
                cout<<i; 
                } 
          
         return(0); 
    } 
    
    void bfs(int v){ 
         for(i=1;i<=n;i++) 
                if(a[v][i] && !visited[i]) 
                    q[++r]=i; 
                if(f<=r){ 
                 visited[q[f]]=1; 
                 bfs(q[f++]); 
                 }  
         }


/*Output:
Enter no. of vertices:5

Enter Adjacency Matrix of the graph:0 1 1 0 0
0 0 0 1 0
0 1 0 0 1
0 0 0 0 0
0 0 0 0 0

Enter the node of ur Choice:1

All the nodes reachable from 1->5 are:2345
*/
