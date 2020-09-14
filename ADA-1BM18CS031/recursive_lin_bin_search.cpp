/*a) Implement Recursive Binary search and Linear search and determine the time required to search an element. Repeat the experiment for different values of N and plot a graph of the time taken versus N.*/

#include <stdio.h> 

int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        if (arr[mid] == x)  
		return mid; 
  
        if (arr[mid] > x) 
		return binarySearch(arr, l, mid-1, x); 
  
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   return -1; 
} 
  
int main(void) 
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
	int result = binarySearch(arr, 0, n-1, x);
	end = clock();

	  
   	if(result == -1)
		 printf("Element is not present in array") 
        else
		 printf("Element is present at index %d", result); 

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	    cout << "\nTime taken by program is : " << fixed  
		 << time_taken << setprecision(5);
	    cout << " sec " << endl;
	return 0;
 
  
   return 0; 
} 


