#include<bits/stdc++.h>
using namespace std;
void alldeviser(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;

        }
    }
    
}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    alldeviser(n);
    return 0;
}