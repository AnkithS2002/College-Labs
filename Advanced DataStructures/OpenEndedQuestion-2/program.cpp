/*In the given range [L, R], print all numbers having unique digits. e.g. In range 10 to 20 should print all numbers except 11.

Example 1:

Input:
L = 10
R = 20

Output:
10 12 13 14 15 16 17 18 19 20

Explanation:
The number 11 has two 1 therefore
11 is not a unique number.
*/

#include<bits/stdc++.h> 
using namespace std; 
  
vector<int> uniqueNumbers(int L,int R)
{
      
        vector<int> res;
        for (int i=L ; i<=R ; i++) 
    	{ 
        	int num = i; 
        	bool visited[10] = {false}; 
  
        	while (num) 
        	{ 
            		if (visited[num % 10]) 
                		break; 
  
            		visited[num%10] = true; 
  
            		num = num/10; 
        	} 
        	if (num == 0) 
            		res.push_back(i); 
    	} 
    	return res;
}

int main() 
{ 
	int l,r;
	cout<<"Enter the range :-\n";
	cout<<"L = ";
	cin>>l;
	cout<<"R = ";
	cin>>r;
    	vector<int> res = uniqueNumbers(l, r); 
	for(int i=0; i<res.size(); i++)
		cout<<res[i]<<" ";
	cout<<endl;
    	return 0; 
} 
