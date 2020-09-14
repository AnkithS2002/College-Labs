/*
Problem:

Given an sorted array arr[] of N integers and a number K is given. The task is to check if the element K is present in the array or not.

Input:

First line of input contains number of testcases T. For each testcase, first line of input contains number of elements in the array and the number K separated by space. Next line contains N elements.

Output:

For each testcase, if the element is present in the array print "1" (without quotes), else print "-1" (without quotes).
*/

#include<iostream>
using namespace std;
int binary(int a[],int low,int n,int key){
	int high = n;
	while(high >= low){
		int mid = (low+high)/2;
			if(key == a[mid])
				return 1;
			else if(key < a[mid])
				high = mid -1;
			else 
				low = mid +1;
		}	
	return -1;
}

int main(){
	int test_cases, i, n, key, j, check=0, k = 0;
	cout << "Enter the number of test cases:";
 	cin  >> test_cases;
	int output[test_cases];
	for(i=0;i<test_cases;i++){
		cout << "Enter the no. of elements and the key to be searched:";
		cin >> n >> key;
		int a[10]; 
		cout << "Enter the elements:";
		for(j=0;j<n;j++)
			cin >> a[j];
		output[k] = binary(a, 0, n, key);k++;
	}
	cout<<"OUTPUT:";
	for(i=0;i<test_cases;i++)
		cout << output[i] << "\n";
	return 1;
}

/*OUTPUT:
Enter the number of test cases:2
Enter the no. of elements and the key to be searched:2 3
Enter the elements:3 4
Enter the no. of elements and the key to be searched:2 4
Enter the elements:1 2 3 2
OUTPUT:
1
-1
*/


		
			
		
