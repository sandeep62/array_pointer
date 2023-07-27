#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the value of m and n";
    cin>>m>>n;
    int **arr;
    arr=new int*[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
    }
}