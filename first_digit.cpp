#include<bits/stdc++.h>
using namespace std;
int firstdigit(int x)
{
    while(x>10)
    {
        x=x/10;
        
    }
    return x;
}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<firstdigit(n);
    return 0;
}