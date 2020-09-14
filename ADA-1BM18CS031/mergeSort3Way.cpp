/*Develop an algorithm/pseudocode or program to implement merge sort algorithm but not dividing the array into two equal halves
but divide it into 3 equal halves and recursively call merge function for each of these 3 parts.
You can upload a hand written algorithm or a program (with screenshot of output).*/
#include <bits/stdc++.h> 
using namespace std; 

void merge(int arr[], int low, int mid1, 
		int mid2, int high, int dest[]) 
{ 
	int i = low, j = mid1, k = mid2, l = low; 

	// choosing smaller of the smallest in the three ranges 
	while ((i < mid1) && (j < mid2) && (k < high)) 
	{ 
		if(arr[i] < arr[j]) 
		{ 
			if(arr[i] < arr[k]) 
			{ 
				dest[l++] = arr[i++]; 
			} 
			else
			{ 
				dest[l++] = arr[k++]; 
			} 
		} 
		else
		{ 
			if(arr[j] < arr[k]) 
			{ 
				dest[l++] = arr[j++]; 
			} 
			else
			{ 
				dest[l++] = arr[k++]; 
			} 
		} 
	} 

	// case where first and second ranges 
	// have remaining values 
	while ((i < mid1) && (j < mid2)) 
	{ 
		if(arr[i] < arr[j]) 
		{ 
			dest[l++] = arr[i++]; 
		} 
		else
		{ 
			dest[l++] = arr[j++]; 
		} 
	} 

	// case where second and third ranges 
	// have remaining values 
	while ((j < mid2) && (k < high)) 
	{ 
		if(arr[j] < arr[k]) 
		{ 
			dest[l++] = arr[j++]; 
		} 
		else
		{ 
			dest[l++] = arr[k++]; 
		} 
	} 

	// case where first and third ranges have 
	// remaining values 
	while ((i < mid1) && (k < high)) 
	{ 
		if(arr[i] < arr[k]) 
		{ 
			dest[l++] = arr[i++]; 
		} 
		else
		{ 
			dest[l++] = arr[k++]; 
		} 
	} 

	// copying remaining values from the first range 
	while (i < mid1) 
		dest[l++] = arr[i++]; 

	// copying remaining values from the second range 
	while (j < mid2) 
		dest[l++] = arr[j++]; 

	// copying remaining values from the third range 
	while (k < high) 
		dest[l++] = arr[k++]; 
} 

void mergeSort3Way(int arr[], int low, 
					int high, int dest[]) 
{ 
	// If array size is 1 then do nothing 
	if (high - low < 2) 
		return; 
	
	int mid1 = low + ((high - low) / 3); 
	int mid2 = low + 2 * ((high - low) / 3) + 1; 

	// Sorting 3 arrays recursively 
	mergeSort3Way(dest, low, mid1, arr); 
	mergeSort3Way(dest, mid1, mid2, arr); 
	mergeSort3Way(dest, mid2, high, arr); 

	// Merging the sorted arrays 
	merge(dest, low, mid1, mid2, high, arr); 
} 


int main() 
{ 
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int data[n], data2[n];
    cout<<"\nEnter the array elements:"<<endl;
    for(int i=0;i<n;i++){
	    cin>>data[i];
	    data2[i] = data[i];
    }
	mergeSort3Way(data,0,n,data2); 
	cout << "After 3 way merge sort: "; 
	for (int i = 0; i < n; i++) 
	{ 
		cout << data[i] << " "; 
	} 
	return 0; 
} 
/*Output
1.Enter the number of elements:11
Enter the array elements:
8 -4 7 3 0 -3 -7 32 1 10 33
After 3 way merge sort: -7 -4 -3 0 1 3 7 8 10 32 33

2.Enter the number of elements:11
Enter the array elements:
8 -4 7 3 0 -3 -7 32 1 10 33
After 3 way merge sort: -7 -4 -3 0 1 3 7 8 10 32 33

*/

