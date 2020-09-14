/*Sort a given set of N integer elements using Bubble Sort technique and compute its time taken. 
Run the program for different values of N and record the time taken to sort.*/
#include<iostream>

#include <bits/stdc++.h> 
using namespace std;
void bubblesort(int arr[],int n)
{	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
}

int main()
{	int n,ch;
	clock_t start, end; 
	cout<<"Enter number of elements:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	//bubble sort - time complexity
	start = clock(); 
	 bubblesort(arr,n);
	end = clock(); 
 		
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
   
	return 0;
}

/*Output:
1.Enter number of elements:
4
Enter the array elements:
34 23 9 17
9	17	23	34	Time taken by program is : 0.000015 sec 

2.Enter number of elements:
9
Enter the array elements:
1 7 0 77 45 32 65 34 87
0	1	7	32	34	45	65	77	87	Time taken by program is : 0.000016 sec 

*/
