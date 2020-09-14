#include<iostream>
using namespace std;

int firstocc(int arr[],int starti,int endi,int key)
{
    int mid,fo;
    if(endi>=starti){
    mid = (starti + endi)/2;
        if(arr[mid]>key)
            return firstocc(arr,starti,mid -1 ,key);

        if(arr[mid]<key)
            return firstocc(arr,mid +1,endi,key);
        if(arr[mid]==key )
            {
               return (firstocc(arr,starti, mid - 1 ,key));
            }
    }
    else
        return starti;

}

int lastocc(int arr[],int starti,int endi,int key,int n)
{
    int mid,lo;
    if(endi>=starti)
    {

    mid = (starti + endi)/2;
        if(arr[mid]>key)
            return lastocc(arr,starti,mid - 1,key,n);
        if(arr[mid]<key)
            return lastocc(arr,mid + 1,endi,key,n);
        if(arr[mid]==key || mid == n-1)

        {
                return (lastocc(arr,mid + 1,endi,key,n));
        }

    }


}
int main()
{
    int n,key,i;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array in sorted order"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter key element"<<endl;
    cin>>key;
    int f=firstocc(arr,0,n-1,key);
    int l=lastocc(arr,0,n-1,key,n);
    if(key!=arr[f])
        cout<<"Element not found"<<endl;
    else
    {
        cout<<"First occurence:   "<<f<<endl;
        cout<<"Last occurence:   "<<l<<endl;
    }
    return 0;
}
