#include<iostream>
using namespace std;

void rotate_binary(int arr[],int n, int key)
{
    int midi;
    int begi=0,endi=n-1;
    midi=(begi+endi)/2;

    while(begi!=endi)
    {

        if(arr[midi]==key)
        {
            cout<<"element found at position "<<(midi+1)<<endl;
            return;
        }

        // right sorted
        else if(arr[midi]<key && arr[midi]<=arr[endi] && key<=arr[endi])
        {
            begi=midi+1;
        }

        // left sorted
        else if(arr[midi]>key && arr[begi]<=arr[midi] && key>=arr[begi])
        {
            endi=midi-1;
        }

        // left unsorted
        else if(arr[begi]>=arr[midi] && (key>=arr[begi] || key<=arr[midi]))
        {
            endi=midi;
        }

        // right unsorted
        else
        {
            begi=midi;
        }

        midi=(begi+endi)/2;

    }
    if(key==arr[midi])
        cout<<"Element found at position "<<(midi+1)<<endl;
    else
        cout<<"Element not found"<<endl;
}

int main()
{
    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    rotate_binary(arr,n,key);
    return 0;
}
