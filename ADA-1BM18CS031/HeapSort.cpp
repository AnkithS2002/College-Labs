//a) Sort a given set of N integer elements using Heap Sort technique and compute its time taken.
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

void heapify(int arr[], int n, int i) 
{ 
	int largest = i; 
	int l = 2*i + 1;
	int r = 2*i + 2; 

	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	if (largest != i) 
	{ 
		swap(arr[i], arr[largest]); 

		heapify(arr, n, largest); 
	} 
} 

void heapSort(int arr[], int n) 
{ 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	for (int i=n-1; i>0; i--) 
	{ 
		swap(arr[0], arr[i]); 
		heapify(arr, i, 0); 
	} 
} 

void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 

int main() 
{ 
    clock_t start, end;
    int n;
    cout << "Enter the size: ";
    cin >> n;
	int arr[n];
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++)
        cin >> arr[i]; 

    start = clock();
	heapSort(arr, n); 
    end = clock();
    
	cout << "Sorted array is \n"; 
	printArray(arr, n); 
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	    cout << "\nTime taken by program is : " << fixed  
		 << time_taken << setprecision(5);
	    cout << " sec " << endl;
} 

/*Output

Enter the size: 5
Enter the elements: 
3 7 1 9 0
Sorted array is 
0 1 3 7 9 

Time taken by program is : 0.000002 sec 


*/
