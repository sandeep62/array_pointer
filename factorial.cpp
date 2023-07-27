#include<bits/stdc++.h>
using namespace std;
void factorial(int x);
int main()
{
    int x;
    cout<<"enter the number:";
    cin>>x;
    factorial(x);
    return 0;
}
void factorial(int x)
{
    int y=1;
    while(x>0)
    {
        y=y*x;
        x--;

    }
    cout<<y;
}