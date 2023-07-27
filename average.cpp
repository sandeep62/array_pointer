#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int average=0;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        average=average+arr[i];


    }
    cout<<"average is"<<(average/n);
    return 0;

}