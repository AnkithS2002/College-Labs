/* Write a program for the following: Given an array arr[] of size N. The task is to find the sum of the digits of 
all array elements which contains even number of 1’s in it’s their binary representation. */

#include<bits/stdc++.h>
using namespace std;

int iseven(int n)
{
	int c=0;
	while(n)
	{
		c+=n&1;
		n>>=1;
	}
  
  /*or
  while(n>0){
    int bit = n%2;
    if(bit)c++
    n/=2;
  }
  */
  
	if(c%2==0)
		return 1;
	else
		return 0;
}

int sumDigits(int n)
{
	int s=0;
	while(n)
	{
		s+=n%10;
		n=n/10;
	}
	return s;
}

int main()
{
	int n;
	int sum=0;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(iseven(a[i]))
			sum=sum+sumDigits(a[i]);
	}
	cout<<"Sum = "<<sum<<endl;
	return 0;
}
		
	
/* output
Enter the size of the array
5
Enter the array elements
2 3 4 5 6
Sum = 14


Enter the size of the array
4
Enter the array elements
3 15 5 6
Sum = 20


*/
