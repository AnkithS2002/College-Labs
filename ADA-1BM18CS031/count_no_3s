//TAKES A LOT OF TIME, DONT USE THIS, LOGIC CORRECT FOR SMALL NUMBERS
//CONVERT NUMBER INTO STRING USING(to_string() function) and check for 3

/*Given a number n, write a function that returns count of numbers from 1 to n that don’t contain digit 3 in
their decimal representation.*/

#include <iostream>
using namespace std;

int main() {
	int T, N;
	cout<<"Enter";
	cin>>T;
	int out[T],k=0;
	
	for(int i=0;i<T;i++){
	    cin>>N;
	    int count = 0;
	    
	    for(int j=1;j<N;j++){
	        int flag=0;
	        while(j/10 >=0){
	            if(j%10 == 3){
	                flag = 1;
	                break;
	            }
	                
	           else{
	               j = j/10;
	           }
	       if(flag == 0)
	        count++;
	        }
	    }
	    
	    out[k] = count;
	    k++;
	}
	cout<<"Ans:"<<endl;
	for(int i=0;i<T;i++)
	    cout<<out[i]<<endl;
	return 0;
}
