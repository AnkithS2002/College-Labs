/* 16b) Write a program for the following: The Longest Increasing Subsequence (LIS) problem is to find the 
length of the longest subsequence of a given sequence such that
all elements of the subsequence are sorted in increasing order. */
#include<bits/stdc++.h> 
using namespace std; 

int lis( int arr[], int n ) 
{ 
	int lis[n]; 

	lis[0] = 1; 
	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 
   
	return *max_element(lis, lis+n); 
} 

int main() 
{ 
    int n=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	cout<<"Length of longest increasing subsequence is "<< lis( arr, n ); 
	return 0; 
}
/*Output:
Enter the number of elements: 6
Enter the elements: 5 3 8 10 35 4
Length of longest increasing subsequence is 4

*/
