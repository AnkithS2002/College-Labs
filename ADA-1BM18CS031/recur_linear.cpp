/* Implement Recursive Binary search and Linear search and determine the time required to search an element. Repeat the experiment for different values of N and plot a graph of the time taken versus N. */

#include<iostream>

#include<chrono>
using namespace std::chrono;
using namespace std;
int linear(int a[], int index, int n, int key)
{
	if(index>=n)
		return -1;
	else if(a[index]==key)
		return 1;
	else
		return linear(a,index+1,n,key);
}

int main()
{
	int key,n;
	cout<<"Enter the array size and key"<<endl;
	cin>>n>>key;
	int arr[n];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	auto start = high_resolution_clock::now(); 
	
	cout<<linear(arr,0,n,key)<<endl;
	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<microseconds>(stop - start); 
	cout << "Time taken : "<< duration.count() << " microseconds" << endl;
	return 0;
}

/* output
Enter the array size and key
5 3
enter the elements of the array
1 2 3 4 5
1
Time taken : 23 microseconds
*/
