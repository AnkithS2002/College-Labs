import java.io.*;
public class DVR 
{
 static int graph[][];
 static int via[][];
 static int rt[][];
 static int v;
 static int e;

 public static void main(String args[]) throws IOException
 {
  BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  
  System.out.println("Please enter the number of Vertices and Edges: ");
  v = Integer.parseInt(br.readLine());
  e = Integer.parseInt(br.readLine());
  
  graph = new int[v][v];
  via = new int[v][v];
  rt = new int[v][v];
  for(int i = 0; i < v; i++)
   for(int j = 0; j < v; j++)
   {
    if(i == j)
     graph[i][j] = 0;
    else
     graph[i][j] = 9999;
   }
   for(int i = 0; i < e; i++)
  {
   System.out.println("Please enter the source, destination and cost of the edge " + (i + 1) + ":");
   int s = Integer.parseInt(br.readLine());
   s--;
   int d = Integer.parseInt(br.readLine());
   d--;
   int c = Integer.parseInt(br.readLine());
   graph[s][d] = c;
   graph[d][s] = c;
  }
  System.out.println();
  init_tables();
  update_tables();
  System.out.println("The Routing Table is: ");;
  print_tables();
  System.out.println();
  
  while(true){
  	System.out.println("Enter 1 to change the cost of any edge or 0 to exit: ");
  	int check = Integer.parseInt(br.readLine());
  	if (check == 0)
  		break;
  	System.out.println("Please enter the cost, source and destination of the new edge: ");
  	int c = Integer.parseInt(br.readLine());
  	int s = Integer.parseInt(br.readLine());
   	s--;
   	int d = Integer.parseInt(br.readLine());
   	d--;
   	graph[s][d] = c;
  	graph[d][s] = c;
	System.out.println();
	init_tables();
	update_tables();
	System.out.println("The new Routing Table is: ");;
	print_tables();
	System.out.println();

  }
 }
 
 static void update_table(int source)
 {
  for(int i = 0; i < v; i++)
  {
   if(graph[source][i] != 9999)
   {
    int dist = graph[source][i];
    for(int j = 0; j < v; j++)
    {
     int inter_dist = rt[i][j];
     if(via[i][j] == source)
      inter_dist = 9999;
     if(dist + inter_dist < rt[source][j])
     {
      rt[source][j] = dist + inter_dist;
      via[source][j] = i;
     }
    }
   }
  }
 }
  static void update_tables()
 {
  int k = 0;
  for(int i = 0; i < 4*v; i++)
  {
   update_table(k);
   k++;
   if(k == v)
    k = 0;
  }
 }
 
 static void init_tables()
 {
  for(int i = 0; i < v; i++)
  {
   for(int j = 0; j < v; j++)
   {
    if(i == j)
    {
     rt[i][j] = 0;
     via[i][j] = i;
    }
    else
    {
     rt[i][j] = 9999;
     via[i][j] = 100;
    }
   }
  }
 }
 static void print_tables()
 {
  for(int i = 0; i < v; i++)
  {
   System.out.println("Shortest distance from " + i);
   for(int j = 0; j < v; j++)
   {
    System.out.print(" to " + j + " is " + rt[i][j] + "    ");
   }
   System.out.println();
  }
 }
 
}

