#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    for ( int i = 1; i <=n; i++)
    {
        for(int j=1;j<=i;j++)
        {
             if(i==1||i==n)
                {
                    cout<<"*"<<"";

                }
            
            else if(j==i||j==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
        /* code */
    }
    return 0;
    
}