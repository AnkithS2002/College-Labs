/*a) Sort a given set of N integer elements using Selection Sort technique and compute its time taken. 
Run the program for different values of N and record the time taken to sort.*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
	int temp,min,i,j;
	for(i=0;i<n-1;i++)
	{ 
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
int main()
{
	int n;
	clock_t start, end;

	
	cout<<"Enter number of elements in an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	start = clock();
	selectionsort(arr,n);
	end = clock();
	
	cout<<"The sorted elements are:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	    cout << "\nTime taken by program is : " << fixed  
		 << time_taken << setprecision(5);
	    cout << " sec " << endl;
	return 0;

}

/*Output:
1.Enter number of elements in an array
5
Enter the array elements
8 4 7 6 2
The sorted elements are:
2 4 6 7 8 
Time taken by program is : 0.000003 sec 

2.Enter number of elements in an array
8
Enter the array elements
3 7 6 3 9 7 2 2
The sorted elements are:
2 2 3 3 6 7 7 9 
Time taken by program is : 0.000003 sec

3.Enter number of elements in an array
5
Enter the array elements
3 3 2 6 4
The sorted elements are:
2 3 3 4 6 
Time taken by program is : 0.000004 sec 

4.Enter number of elements in an array
3
Enter the array elements
-9 6 0 
The sorted elements are:
-9 0 6 
Time taken by program is : 0.000003 sec

5.Enter number of elements in an array
20
Enter the array elements
1
6
7
4
3
9
4
5
6
7
4
3
4
5
4
3
54
7
8
5
The sorted elements are:
1 3 3 3 4 4 4 4 4 5 5 5 6 6 7 7 7 8 9 54 
Time taken by program is : 0.000005 sec 

