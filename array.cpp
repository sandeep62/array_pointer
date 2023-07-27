#include<bits/stdc++.h>
using namespace std;
void sortarray(int x);
int main()
{
    int x;
    cout<<"enter the array elements";
    cin>>x;
    sortarray(x);
    return 0;
}
void  sortarray(int x)
{
    int arr[x];
    cout<<"enter the elements:";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<x;i++)
    {
        if(arr[i]>=arr[i+1])
            {
                arr[i]=arr[i+1];

            }
        }
        cout<<"sorted array";
    for(int i=0;i<x;i++)
    {
        cout<<arr[i];
    }
        
    }