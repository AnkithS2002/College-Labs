/* Sort a given set of N integer elements using Insertion Sort technique and compute its time taken.  */

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
         while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
int main()
{
	int n;
	clock_t starttime, endtime;
	cout<<"Enter number of elements in an array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	starttime = clock(); 
	insertionSort(arr,n);
	endtime = clock(); 
   cout <<"the sorted elements are\n";
    for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	
	double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "\nTime taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
	return 0;
		
}

/*Output:

Enter number of elements in an array
6 
Enter the array elements
1 -99 0 12 13 -3
the sorted elements are
-99	-3	0	1	12	13	
Time taken by program is : 0.000003 sec 
*/


