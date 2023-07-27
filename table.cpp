#include<bits/stdc++.h>
using namespace std;
int table(int x)
{
    for(int i=1;i<=x;i++)
    {
        for(i=1;i<=10;i++)
        {
            cout<<x*i<<endl;
        }

    }
}
int main()
{
    int x;
    cout<<"enter the number :";
    cin>>x;
    table(x);
}